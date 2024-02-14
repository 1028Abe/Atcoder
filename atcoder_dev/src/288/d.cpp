#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k; 
    cin >> n >> k;
    vector<long> A(n);
    for(auto &a:A) cin >> a;
    int q;
    cin >> q;

    for(int i = 0; i < n; i++){
        cout << (long long)(A[i] + B[i]) << endl;
    }

    return 0;
}