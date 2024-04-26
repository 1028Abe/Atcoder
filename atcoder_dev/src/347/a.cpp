#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    vector<int> A(n);
    for(int &a:A) cin >> a;

    for(int i = 0; i < n; i++){
        if(A[i]%k==0) {
            cout << A[i]/k << " ";
        }
    }cout << endl;

    return 0;
}