#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// 正方向
ll ceil_div(ll x, ll y) {
  ll d = x / y;
  return d * y == x ? d : d + ((x > 0) ^ (y < 0));
}

int main(){

    ll a;
    cin >> a;
    const ll div = 10;
    cout << ceil_div(a, div) << endl;

    return 0;
}