#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int h, w;
    cin >> h >> w;
    vector<vector<int>> A(h+1, vector<int>(w+1));
    for(int y = 1; y <= h; y++) for(int x = 1; x <= w; x++) cin >> A[x][y];

    int p[20];
    int l = h+w-2 , ans = 0;
    for(int i = 1; i <= l; i++){
        if(i > w-1) p[i] = 1;
        else p[i] = 0;
    }

    do{
        int x = 1, y = 1;
        set<int> S; S.insert(A[1][1]) ;
        for(int i = 1; i <= l; i++){
            if(p[i]) y++;
            else x++;
            S.insert(A[x][y]);
        }
        if(S.size() == l+ 1) ans++;
    }while(next_permutation(p+1, p + l+ 1));
    cout << ans << endl;
}
