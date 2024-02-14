#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

long long modinv(long long a, long long m);
long long extGCD(long long a, long long b, long long &x, long long &y);
long long modinv1(long long a, long long m);


int main(){

    int N;
    std::string S;
    std::cin >> N;
    std::cin >> S;

    bool doCheck = false;
    bool isIn = false;
    int count = 0;
    for(int i = 0; i < N; i++){
        if((S[i]=='|')){
            if(!doCheck){
                doCheck = true;
                count++;
            }
            else{
                doCheck = false;
                count = 0;
            }
        }
        if(doCheck && (S[i]=='*')){
            isIn = true;
        }
    }

    if(isIn) std::cout << "in" << std::endl;
    else std::cout << "out" << std::endl;

    return 0;
}





long long modinv(long long a, long long m){
    long long b = m, u = 1, v = 0;

    while(b){
        long long t = a/b;
        a -= t*b; std::swap(a,b);
        u -= t*v; std::swap(u,v);
    }
    u %= m;
    if(u < 0) u += m;
    return u;
}

long long extGCD(long long a, long long b, long long &x, long long &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    long long d = extGCD(b, a%b, y, x);
    y -= a / b * x;
    return d;
}

inline long long mod(long long a, long long m) {return (a % m + m)%m;}

long long modinv1(long long a, long long m){
    long long x, y;
    extGCD(a, m, x, y);
    return mod(x, m);
}