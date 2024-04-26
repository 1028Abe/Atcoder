#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<string> S(n), T(m);
    for(auto &s:S) cin >> s;
    for(auto &t:T) cin >> t;

    int ans = 0;

    for(auto s:S){
        for(auto t:T){
            if(s[3]==t[0] && s[4]==t[1] && s[5]==t[2]) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}