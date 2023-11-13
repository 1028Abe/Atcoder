#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int bin_search(ll key, const vector<ll>& a){
    ll  first = 0;
    ll  end = a.size() - 1;
    while(end >= first){
        int mid = (first + end) / 2;
        if(a[mid] == key) return mid;
        else if(a[mid] < key) first = mid + 1;
        else if(a[mid] > key) end = mid - 1;
    }
    return -1;
}

int main(){
    const int offset = 200000;
    const int shift = 1000000;

    int N, M, H, K; cin >> N >> M >> H >> K;
    string S; cin >> S;

    vector<ll> coord(M);
    for(int i = 0; i<M; i++){
        int x, y;
        cin >> x >> y;
        coord[i] = (x + offset) + (y + offset)*shift;
    }
    
    sort(coord.begin(), coord.end());
    vector<bool> used(M, false);

    int cx = 0;
    int cy = 0;

    for(int i = 0; i < N; i++){
        if(S[i]=='R'){
            cx++; 
        }
        else if(S[i]=='L'){
            cx--;
        }
        else if(S[i]=='U'){
            cy++;
        }
        else if(S[i]=='D'){
            cy--;
        }

        H--;
        if(H < 0) {
            cout << "No" << endl;
            return 0;
        }

        if(H < K){
            ll key = cx + offset + (offset + cy)*shift;
            int ind = bin_search(key, coord);
            if(ind == -1) continue;
            if(!used[ind]){
                used[ind] = true;
                H = K;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}