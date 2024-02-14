#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;

ll ceil_div(ll x, ll y) {
  ll d = x / y;
  return d * y == x ? d : d + ((x > 0) ^ (y < 0));
}

int main(){

    ll n, m;
    cin >> n >> m;
    ll ans = 1e18;
    for(ll i = 1; i <= n; i++){
        ll b = ceil_div(m, i);
        //cout << i <<  " " << b << endl;
        if(b <= n){
            ans = min(i*b, ans);
        }
        if(i > b) break;
    }
    if(ans == 1e18) cout << -1 << endl;
    else cout << ans << endl; 

    return 0;
}