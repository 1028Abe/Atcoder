#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

long long modinv(long long a, long long m);
long long extGCD(long long a, long long b, long long &x, long long &y);
long long modinv1(long long a, long long m);


int main(){

    int N, T;
    std::cin >> N >> T;
    std::vector<long long> C(N);
    std::vector<long long> R(N);

    // std::vector<int> c;
    // std::vector<int> r;

    long long  r_max = -100;
    int ind1 = -1;

    long long max_p1 = -100;
    int ind_p1 = -1;

    

    for(int i = 0; i < N; i++) std::cin >> C[i];
    for(int i = 0; i < N; i++) std::cin >> R[i];

    long long T_p1 = C[0];

    for(int i = 0; i < N; i++){
        if(C[i]==T){
            if(r_max < R[i]) {
                r_max = R[i];
                ind1 = i+1;
            }
        }
        else if(C[i]==T_p1){
                if(max_p1 < R[i]){
                    max_p1 = R[i];
                    ind_p1 = i+1;
            }
        }
        
    }

    if(ind1 == -1) std::cout << ind_p1 << std::endl;
    else std::cout << ind1 <<std::endl;

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