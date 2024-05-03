#include <bits/stdc++.h>

using namespace std;

int main(void){

    int h, w;
    cin >> h >> w;

    vector<vector<int>> A(h, vector<int>(w));
    for(auto &a:A) for(auto &aa:a) cin >> aa;

    int l = w + h -2;
    vector<int> P(l, 0);

    //1 -> SITA 0 -> MIGI
    for(int i = 0; i < l; i++){
        if(i >= w - 1) P[i] = 1;
    }

    int ans = 0;
    do{
        set<int> s;
        int x = 0;
        int y = 0;
        s.insert(A[y][x]);
        for(int i = 0; i < l; i++){
            if(P[i]) y++;
            else x++;
            s.insert(A[y][x]);
        }
        if(s.size()==l+1) {
            ans++;
        }
    }while(next_permutation(P.begin(), P.end()));

    cout << ans << endl;

}       
