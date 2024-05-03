#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    ll n, k;
    cin >> n >> k;
    typedef pair<ll, ll> P;
    vector<P> A(n);
    for(int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        A[i] = {x, y};
    }

    sort(A.begin(), A.end());

    ll end = A[n-1].first;

    ll l = -1, r = n;

    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += A[i].second;
    }

    if(sum <= k) {
        cout << 1 << endl;
        return 0;
    }
    for(int i = 0; i < n; i++){
        sum -= A[i].second;
        if(sum <= k){
            cout << A[i].first + 1 << endl;
            return 0;
        }

    }

    return 0;
}