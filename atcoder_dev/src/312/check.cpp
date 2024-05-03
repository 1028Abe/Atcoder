#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll bin1(ll x, const vector<ll> &z){
    ll l = 0, r = z.size()-1;
    while(l+1 < r){
        ll mid = (l+r)/2;
        if(z[mid]>=x) r=mid;
        else l = mid;
    }
    return r;
}

ll bin2(ll x, const vector<ll> &z){
    ll l = 0, r = z.size()-1;
    while(l+1 < r){
        ll mid = (l+r)/2;
        if(z[mid]<=x) r=mid;
        else l = mid;
    }
    return r;
}

int main(){

    vector<ll> a={90, 110, 120};
    ll ind = bin2(110, a);

    cout << ind + 1 << endl;

    return 0;
}