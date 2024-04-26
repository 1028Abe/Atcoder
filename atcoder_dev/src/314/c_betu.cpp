#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    string S;
    cin >> S;

    vector<int> C(n);
    vector<vector<int>> P(m);
    for(int &c:C) {
        cin >> c;
        c--;
    }

    for(int i = 0; i < n; i++){
        P[C[i]].push_back(i);
    }

    string ans(n, '!');
    for(int i = 0; i < m; i++){
        int k = (int)P[i].size();
        for(int j = 0; j < k; j++){
            ans[P[i][(j+1)%k]] = S[P[i][j]];
        }
    }

    cout << ans << endl;

    return 0;
}