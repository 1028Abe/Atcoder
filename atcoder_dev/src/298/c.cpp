#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string s;
    cin >> n >> s;
    char kushi = '-';
    vector<int> pos;
    for(int i = 0; i < n; i++){
        if(s[i]==kushi) {
            pos.push_back(i);
        }
    }

    int ans = -1;
    int range = (int)pos.size();
    if(range==0 || range==n) {
        cout << -1 << endl;
        return 0;
    }
    for(int i = 0; i < range - 1; i++){
        int len = pos[i+1] - pos[i] -1;
        if(len <= 0) continue;
        ans = max(ans, len);
    }

    if(range > 0) {
        ans = max(ans, pos[0]);
        ans = max(ans, (n-1) - pos[range-1]);
    }

    cout << ans << endl;

    return 0;
}