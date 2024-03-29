#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int MAX = 510000;
const int MOD = 998244353;

vector<ll> fac(MAX), finv(MAX), inv(MAX);

void COMinit(vector<ll> &fac, vector<ll> &finv, vector<ll> &inv){

    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;

    for(ll i = 2; i < MAX; i++){
        fac[i] = fac[i-1]*i%MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD/i)%MOD;
        finv[i] = finv[i-1] * inv[i] % MOD;
    }
}

ll COM(int n, int k){
    if(n<k) return 0;
    if(n < 0 || k < 0) return 0;
    return fac[n]*(finv[k] * finv[n-k] % MOD) % MOD;
}

int main(){

    COMinit(fac, finv, inv);
    cout << COM(5, 3) << endl;
    return 0;
}