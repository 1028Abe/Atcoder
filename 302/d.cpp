#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ll N, M, D;
    cin >> N >> M >> D;
    vector<ll> A(N), B(M);

    for(auto& a : A) cin >> a;
    for(auto& b : B) cin >> b;

    sort(A.begin(), A.end());
    ll ans = 0;

    for(auto& b : B){
        ll key= D + b;
        auto it = upper_bound(A.begin(), A.end(), key) - 1;
        if(abs(*it - b) <= D) ans = std::max(b + *it, ans);
    }

    if(ans == 0) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}