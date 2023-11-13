#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

ll powpow(ll a, ll b){
    if(b==0) return 1;
    ll val = powpow(a, b/2);
    val *= val;
    if(b%2==1) val *= a;
    return val;
}

int main(){
    const int num = 64;
    ll ans = 0;
    ll exp = 0;
    for(int i = 0; i < num; i++){
        char s;
        cin >> s;
        if(s=='1') ans += powpow(2, exp);
        exp++;
    }

    cout << ans << endl;

    return 0;
}