#include <bits/stdc++.h>

using namespace std;

const int N = 500010;
vector<int> seg(2*N, 0);

void update(int ind, int v){
    ind += N;
    seg[ind] = v;
    while(ind){
        ind /= 2;
        seg[ind] = max(seg[ind*2], seg[ind*2+1]);
    }
}

int find_max(int l, int r){
    int ans = 0;
    l += N;
    r += N;
    while(l < r){
        if(l%2==1){
            ans = max(ans, seg[l]);
            l++;
        }
        l /= 2;
        if(r%2==1){
            ans = max(ans, seg[r-1]);
            r--;
        }
        r /= 2;
    }

    return ans;
}

int query(int l, int r, int ind, int ){
    
}

int main(){

    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for(auto &x:a) cin >> x;

    for(int i = 0; i < n; i++){
        int l = max(0, a[i]-d);
        int r = min(N, a[i]+d);
        int mx = find_max(l, r+1);
        update(a[i], mx+1);
    }

    cout << find_max(1, N) << endl;

    return 0;
}