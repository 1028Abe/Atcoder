#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    string S;
    cin >> S;

    vector<int> C(n);
    for(int &c:C) {
        cin >> c;
        c--;
    }

    vector<deque<char>> cn(m);
    for(int i = 0; i < n; i++){
        cn[C[i]].push_back(S[i]);
    }

    for(int i = 0; i < m; i++){
        char tmp = cn[i].back();
        cn[i].push_front(tmp);
        cn[i].pop_back();
    }

    // for(auto i:cn) {

    //     if(i.size()==0) continue;
    //     for(auto j:i)
    //         cout << j;

    //     cout << endl;
    // }

    string ans;
    for(int i = 0; i < n; i++){
        if(cn[C[i]].size()==0) continue;
        ans.push_back(cn[C[i]][0]);
        cn[C[i]].pop_front();
    }

    cout << ans << endl;

    return 0;
}