#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// 正方向
ll ceil_div(ll x, ll y) {
  ll d = x / y;
  return d * y == x ? d : d + ((x > 0) ^ (y < 0));
}
// 負方向
ll floor_div(ll x, ll y) {
  ll d = x / y;
  return d * y == x ? d : d - ((x < 0) ^ (y < 0));
}

ll solve(ll v, map<ll, ll>& memo){
  ll fr, cl;
  fr = floor_div(v, 2), cl = ceil_div(v, 2);
  if(!memo.count(fr)) solve(fr, memo);
  if(!memo.count(cl)) solve(cl, memo);
  return memo[v] = memo[fr] + memo[cl] + v;
}

int main(){
    ll N;
    cin >> N;
    
    map<ll, ll> memo;
    memo[1] = 0;
    cout << solve(N, memo) << endl;

    return 0;
}