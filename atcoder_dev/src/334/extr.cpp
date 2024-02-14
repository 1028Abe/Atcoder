#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll extGCD(ll a, ll b, ll &x, ll &y){
    if(b==0) {
        x = 1;
        y = 0;
        return a;
    }
    ll d = extGCD(b, a%b, y, x);
    y -= a/b*x;
    return d;
}

int main(void){
    ll a,b,x,y;
    a =  101, b = 17;
    cout << extGCD(101, 17, x, y) << endl;
    cout << x << " " << y << endl;
}