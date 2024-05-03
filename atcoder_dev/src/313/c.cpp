#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

  int n;
  cin >> n;
  vector<ll> A(n);
  for(ll &a:A) cin >> a;

  ll sum = 0;
  for(auto a:A) sum += a;

  sort(A.begin(), A.end());
  ll x = sum/n;
  ll r = sum%n;

  vector<ll> b(n, x);

  for(int i = 0; i < r; i++){
    b[i]++;
  }

  sort(b.begin(), b.end());
  ll ans = 0;
  for(int i = 0; i < n; i++){
    ans += abs(A[i]-b[i]);
  }
  cout << ans/2 << endl;

  return 0;
}