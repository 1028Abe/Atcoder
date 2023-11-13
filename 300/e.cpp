#include <iostream>
#include <vector>
#include <map>

using namespace std;
typedef long long ll;

const int mod = 998244353;
class mint {
    long long x;
public:
    mint(long long x=0) : x((x%mod+mod)%mod) {}
    mint operator-() const { 
      return mint(-x);
    }
    mint& operator+=(const mint& a) {
        if ((x += a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator-=(const mint& a) {
        if ((x += mod-a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator*=(const  mint& a) {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint& a) const {
        mint res(*this);
        return res+=a;
    }
    mint operator-(const mint& a) const {
        mint res(*this);
        return res-=a;
    }
    mint operator*(const mint& a) const {
        mint res(*this);
        return res*=a;
    }
    mint pow(ll t) const {
        if (!t) return 1;
        mint a = pow(t>>1);
        a *= a;
        if (t&1) a *= *this;
        return a;
    }
    // for prime mod
    mint inv() const {
        return pow(mod-2);
    }
    mint& operator/=(const mint& a) {
        return (*this) *= a.inv();
    }
    mint operator/(const mint& a) const {
        mint res(*this);
        return res/=a;
    }

    friend ostream& operator<<(ostream& os, const mint& m){
        os << m.x;
        return os;
    }
};

long long modinv(long long a, long long m){
    long long b = m, u = 1, v = 0;
    while(b){
        long long t = a / b;
        a -= t *b; swap(a,b);
        u -= t*v; swap(u,v);
    }
    u %= m;
    if(u < 0) u += m;
    return u;
}

mint dp(ll n, ll N, map<ll, mint>& memo) {
  if (n >= N) return n == N ? 1 : 0;
  if (memo.count(n)) return memo[n];
  mint res = 0;
  for (int i = 2; i <= 6; i++) res += dp(i * n, N ,memo);
  return memo[n] = res / 5;
}

int main(){

    map<ll, mint> memo; long long N;
    cin >> N;

    long long M = 998244353;

    mint a = dp(1, N, memo);
    cout << a << endl;

    return 0;
}