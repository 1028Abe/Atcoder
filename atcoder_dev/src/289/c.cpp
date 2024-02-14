#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(m);
    for(int i = 0; i < m; i++){
        int c;
        cin >> c;
        while(c--){
            int a;
            cin >> a;
            A[i].emplace_back(a);
        }
    }
    int ans = 0;
    for(int b = 0; b < (1<<m); b++){
        set<int> S;
        for(int i = 0; i < m; i++){
            if((b>>i)&1){
                for(auto a:A[i]){
                    S.insert(a);
                }
            }
        }
        if((int)S.size()==n) ans++;
    }

    cout << ans << endl;

    return 0;
}