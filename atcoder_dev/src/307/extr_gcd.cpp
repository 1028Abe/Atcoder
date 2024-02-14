#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll extra(ll a, ll b){
    if(b==0) return a;
    return extra(b, a%b);
}

ll extGCD(ll a, ll b, ll &x, ll & y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    ll d = extGCD(b, a%b, y, x);
    y -= a/b * x;
    return d;
}

ll mod(ll a, ll m){
    return (a%m + m)%m;
}

ll mod_inv(ll a, ll m){
    ll x, y;
    ll g = extGCD(a, m, x, y);
    return mod(x, m/g);
}

int main(){
    ll x = 0, y = 0;
    extGCD(101, 17, x, y);
    cout << x << " " << y << endl;

    return 0;
}