#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define MAXP 300005

vector<ll> sieve(ull n){
    vector<ll> dst;
    int max_p = (int)sqrt(n/12)+10;
    vector<int> P(max_p,0);
    
    if(n >= 0) P[0] = 1;
    if(n >= 1) P[1] = 1;
    for(ull i = 2; i < max_p; i++){
        if(P[i]) continue;
        dst.push_back(i);
        for(ull j = i*i; j < max_p; j += i){
            P[j] = 1;
        }
    }
    
    return dst;
}

int main(){

    unsigned long long N;
    cin >> N;
    vector<ll> p = sieve(N);
    
    //for(auto& x : p) cout << x << endl;
    int count = 0;
    for(int i = 0; i < p.size(); i++){
        for(int j = i + 1; j < p.size(); j++){
            for(int k = j + 1; k < p.size(); k++){
                long long v = p[i] * p[i] * p[j];
                if(v>N) break;
                v *= p[k];
                if(v>N) break;
                v *= p[k];
                if(v>N) break; 
                count++;
            }
        }
    }
    cout << count << endl;
    
    return 0;
}