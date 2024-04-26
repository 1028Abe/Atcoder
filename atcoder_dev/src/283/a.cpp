#include <bits/stdc++.h>

using namespace std;

long long powll(long long x, long long n){
    long long dst = 1;

    while(n > 0){
        if(n & 1){
            dst *= x;
        }
            x *= x;
            n >>= 1;
    }
    return dst;
}


int main(){

    long long a, b;
    cin >> a >> b;

    cout << powll(a, b) << endl;

    return 0;
}