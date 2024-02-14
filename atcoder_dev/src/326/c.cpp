#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    double n, m;
    cin >> n >> m;
    vector<double> A(n);
    for(auto &a:A) cin >> a;
    sort(A.begin(), A.end());

    ll ans = 0;
    for(ll i = 0; i < n; i++){
        double base = A[i] - 0.5;
        ll tmp = 0;
        auto it_first = upper_bound(A.begin(), A.end(),base + m);
        // for(ll j = i; j < n; j++){
        //     if(base <= A[j] && A[j] < base + m) tmp++;
        // }
        tmp = it_first - A.begin() - i;
        ans = max(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}