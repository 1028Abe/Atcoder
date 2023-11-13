#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int N; cin >> N;

    vector<vector<int>> I(N);
    vector<vector<int>> J(N);

    for(int i = 0; i < 3*N; i++){
        int x; cin >> x;
        x--;
        I[x].push_back(x);
        J[x].push_back(i);
    }
    set<pair<int, int>> ans;
    for(int i = 0; i < N; i++){
        ans.insert({J[i][1] + 1, I[i][1] + 1});
    }

    for(auto it = ans.begin(); it != ans.end(); it++){
        cout << (*it).second << " ";
    }cout << endl;

    return 0;
}