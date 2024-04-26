#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    int n = (int)s.size();
    long long ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='0'){
            if(i+1 < n-1 && s[i+1]=='0') i++;
            ans++;
        }
        else ans++;
    }

    cout << ans << endl;

    return 0;
}