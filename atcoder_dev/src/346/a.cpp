#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> A(n);
    for(int &a:A) cin >> a;

    for(int i = 0; i < n-1; i++){
        cout << A[i]*A[i+1] << " ";
    }cout << endl;


    return 0;
}