#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long t;
    cin >> n >> t;
    vector<long long> A(2*n);
    vector<long long> sum(2*n+1, 0);
    
    long long cycle = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        cycle += A[i];
    }

    for(int i = 0; i < n; i++) A[n-1+i] = A[i]; 
    for(int i = 0; i < 2*n; i++) sum[i+1] = A[i]+sum[i];
    long long aa = t%cycle;
    
    for(int i = 0; i < 2*n; i++){
        if(aa < sum[i]){
            cout << i+1 << " " << aa - sum[i] << endl;;
            break;
        }
    }

    return 0;
}