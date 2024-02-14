#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll bin(ll l, ll r, ll key){
    ll mid;
    while(r >= l){
        mid = (r - l)/2 + l;
        if(mid > key) r = mid - 1;
        else if(mid == key) return mid;
        else l = mid + 1;
    }
    return -1;
}

int main(){

    ll d;
    cin >> d;
    for(ll z = 0; ;z++){
        for(ll x = 0; x*x < 500000; x++){
            for(ll y = x; y*y < 500000; y++){
                ll tmp = abs(x*x + y*y -d);
                if(z == tmp) {
                    cout << z << endl;
                }
            }
        }
    }

    return 0;
}