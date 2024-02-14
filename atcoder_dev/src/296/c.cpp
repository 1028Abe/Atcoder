#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;

int main(){

    ll n, x;
    cin >> n >> x;
    vector<ll> A(n);
    vector<ll> table(n, x);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        table[i] += A[i];
    }
    
    sort(A.begin(), A.end());
    for(int i = 0; i < n; i++){
        auto it = lower_bound(A.begin(), A.end(), table[i]);
        if(*(it) == table[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}