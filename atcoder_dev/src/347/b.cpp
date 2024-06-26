#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > calcNext(const string &S) {
    int n = (int)S.size();
    vector<vector<int> > res(n+1, vector<int>(26, n));
    for (int i = n-1; i >= 0; --i) {
        for (int j = 0; j < 26; ++j) res[i][j] = res[i+1][j];
        res[i][S[i]-'a'] = i;
    }
    return res;
}

int main(){

    string s;
    cin >> s;
    int n = (int)s.size();

    set<string> ans;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            string ss;
            for(int k = 0; k <= j; k++){
                if(i+k > n-1) break;
                ss += s[i+k];
            }
            ans.insert(ss);
        }
    }

    cout << ans.size() << endl;

    return 0;
}