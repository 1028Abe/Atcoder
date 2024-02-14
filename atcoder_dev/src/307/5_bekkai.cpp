#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll pow_mod(ll x, ll n, ll mod){
    if(n == 0) return 1;
    ll dst = 1;

    while(n > 0){
        if(n & 1){
            dst *= x;
            dst %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    if(dst < 0) dst += mod;
    return dst;
}

int main(){

    const int MOD = 998244353;
    int n, m; cin >> n >> m;

    vector<ll> ans(n+1, 0);
    ans[0] = m;
    for(ll i = 0; i < n; i++){ 
        ans[i+1] = ((m%MOD) * pow_mod(m-1, i, MOD))%MOD - ans[i];
        if(ans[i+1] < 0) ans[i+1] += MOD;
    }
    cout << ans[n] << endl;
    return 0;
}