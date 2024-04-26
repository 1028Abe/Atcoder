#include <bits/stdc++.h>

using namespace std;

int lcp(string s, string t){
    int dst = 0;
    int n = min((int)s.size(), (int)t.size());

    for(int i = 0; i < n; i++){
        if(s[i]==t[i]){
            dst++;
        }
        else break;
    }

    return dst;
}

int main(){

    int n;
    cin >> n;

    vector<pair<string, int>> S(n);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        S[i] = {s, i};
    }

    sort(S.begin(), S.end());

    vector<int> ans(n, 0);
    ans[S[0].second] = lcp(S[0].first, S[1].first);

    for(int i = 1; i < n-1; i++){
        ans[S[i].second] = max(lcp(S[i].first, S[i-1].first),
                                    lcp(S[i+1].first, S[i].first)); 
    }

    ans[S[n-1].second] = lcp(S[n-1].first, S[n-2].first);

    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }

    return 0;
}