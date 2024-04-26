#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> A(m);
    for(int &a:A) cin >> a;

    vector<string> S(n);
    for(string &s:S) cin >> s;

    long long max_v = 0;

    vector<long long> v(n, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(S[i][j]=='o') v[i] += A[j];
        }
        v[i] += i+1;
        max_v = max(max_v, v[i]);
    }

    vector<int> ans(n, 0);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(v[i]==max_v) cnt++;
    }

    for(int i = 0; i < n; i++){
    
        if(v[i]==max_v && cnt == 1) {
            ans[i] = 0;
            continue;
        }

        vector<int> sol;
        for(int j = 0; j < m; j++){
            if(S[i][j]=='x') sol.push_back(A[j]);
        }

        sort(sol.rbegin(), sol.rend());
        long long now = v[i];
        for(int j = 0; j < (int)sol.size(); j++){
            now += sol[j];
            if(now > max_v) {
                ans[i] = j+1;
                break;
            }
        }
    }

    for(int e:ans) cout << e << endl;

    return 0;
}