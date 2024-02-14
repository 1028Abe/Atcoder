#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int ma = 0;
    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        A[i] = a;
        ma = max(a, ma);
    }
    
    vector<long> S(1e6+1, 0);
    for(long i = 0; i < n; i++){
        S[A[i]] += A[i];
    }
    for(long i = 0; i < ma; i++){
        S[i+1] += S[i];
    }

    for(int i = 0; i < n; i++){
        cout << S[ma] - S[A[i]] << " ";
    }cout << endl;

    return 0;
}