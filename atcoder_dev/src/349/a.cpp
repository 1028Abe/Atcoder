#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> A(n, 0);
    for(int i = 0; i < n-1; i++) cin >> A[i];

    int sum = 0;
    for(int i = 0; i < n-1; i++){
        sum += A[i];
    }

    cout << -sum << endl;

    return 0;
}
