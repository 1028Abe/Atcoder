#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll floor(ll n, ll d){
    ll r = (n%d + d)%d;
    return (n-r) / d;
}

int main(){
    
    cout << ceil(4.5) << endl;
    cout << ceil(-4.5) << endl;
    cout << floor(4.5) << endl;
    cout << floor(-4.5) << endl;

    return 0;
}