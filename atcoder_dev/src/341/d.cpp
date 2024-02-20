#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(a < b) swap(a, b); 
    if(a%b==0) return b;
    return gcd(b, a%b);
}

template<typename T>
T floor_div(T x, T y) {
  T d = x / y;
  return d * y == x ? d : d - ((x < 0) ^ (y < 0));
}

int main(){

    ll n, m, k;
    cin >> n >> m >> k;

    ll lcm = (m*n) / gcd(m, n);
    ll upper = 1e10;
    ll left = 0, right = (ll)2e18, mid, y;

    while(left+1 < right){
        mid = (left + right)/2;
        y = floor_div(mid, n) + floor_div(mid, m) - 2*floor_div(mid, lcm);
        if(y < k) left = mid;
        else right = mid;
    }

    cout << right << endl;

    return 0;
}