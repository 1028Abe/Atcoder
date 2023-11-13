#include <bits/stdc++.h>

using namespace std;
typedef long long ull;

ull pow(ull a, ull b){
    ull dst = 1;
    while(b > 0){
        if(b & 1){
            dst *= a;
        }
        a *= a;
        b >>= 1;
    }
    return dst;
}

int main(){

    ull b;
    cin >> b;
    for(ull i = 1; i < 30; i++){
        //if(i > b) break;
        if(pow(i, i)==b){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}