#include <bits/stdc++.h>

using namespace std;

long long prime(long long a, long long n){
    if(a%2==0) return 2;
    for(int i = 3; i<= n; i+=2){
        if(a%i==0) return i;
    }
    return 2;
}

int main(){

    int t;
    cin >> t;

    vector<long long> ns(t);
    for(int i = 0; i < t; i++){
        cin >> ns[i];
    }

    for(int i = 0; i < t; i++){
        long long cubic = (long long)cbrt(ns[i]);
        long long p = prime(ns[i], cubic);
        long long q;
        if(ns[i] == (ns[i]/(p*p))*p*p) q = ns[i]/(p*p);
        else {
            q = ns[i]/p;
            q = (long long)sqrt(q);
            swap(q, p);
        }
        cout << p << " " << q << endl;
    }

    return 0;
}