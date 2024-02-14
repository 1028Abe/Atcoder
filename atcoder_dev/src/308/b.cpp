#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int n, m; cin >> n >> m;
    vector<string> C(n), D(m);
    vector<int> P(m+1);

    for(auto &c : C) cin >> c;
    for(auto &c : D) cin >> c;
    for(auto &c : P) cin >> c;

    int ans = 0;

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(C[i] == D[j]) ans += P[j+1];
            else cnt++;
        }
        if(cnt == m) ans += P[0];
    }
    cout << ans << endl;
    return 0;
}