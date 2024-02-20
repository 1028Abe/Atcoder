#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

template<typename T>
T floor_div(T x, T y) {
  T d = x / y;
  return d * y == x ? d : d - ((x < 0) ^ (y < 0));
}

int main(){

    int n; 
    cin >> n;
    vector<ll> A(n);
    for(auto &a:A) cin >> a;

    vector<ll> S(n-1), T(n-1);
    for(int i = 0; i < n-1; i++) cin >> S[i] >> T[i];
    
    for(int i = 0; i < n-1; i++){
        ll num;
        num = floor_div(A[i], S[i]);
        A[i+1] += T[i]*num;
    }

    cout << A[n-1] << endl;

    return 0;
}