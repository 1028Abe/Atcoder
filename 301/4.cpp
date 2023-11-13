#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    string S; cin >> S;
    ll N; cin >> N;

    reverse(S.begin(), S.end());
    while(S.size() < 60) S.push_back('0');
    int lb = -1;
    
    for(int i = 0; i < 60; i++){
        if(S[i] != '?' && S[i] - '0' != (N>>i & 1)) lb = i;
    }

    if(lb == -1){
        cout << N << endl;
        return 0;
    }

    for(int i = lb; i < 60; i++){
        if(S[i] == '1' || !(N >> i & 1)) continue;
        S[i] = '0';
        for(int j = 0; j < i; j++){
            if(S[j] == '?') S[j] = '1';
        }
        for(int j = i + 1; j < 60; j++){
            S[j] = '0' + (N>>j&1);
        }
        ll ans = 0;
        for(int j = 59; j >= 0; j--){
            ans *= 2;
            ans += S[j] - '0';
        }
        cout << ans << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}