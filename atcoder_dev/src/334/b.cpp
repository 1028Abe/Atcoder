#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ceil_div(ll x, ll y) {
  ll d = x / y;
  return d * y == x ? d : d + ((x > 0) ^ (y < 0));
}
// 負方向
ll floor_div(ll x, ll y) {
  ll d = x / y;
  return d * y == x ? d : d - ((x < 0) ^ (y < 0));
}

int main(){
    
    ll a, m, l, r;

    cin >> a >> m  >> l >> r;
    l -= a;
    r -= a;
    cout << floor_div(r,m) - ceil_div(l, m) + 1<<  endl;
}