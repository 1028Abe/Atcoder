#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    cin >> n;
    vector<long> A(n), B(n);

    for(int i = 0; i < n; i++){
        cin >> A[i] >> B[i];
    }
    for(int i = 0; i < n; i++){
        cout << (long long)(A[i] + B[i]) << endl;
    }

    return 0;
}