#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll bin_search(ll l, ll r, const vector<ll> a, const vector<ll> b){
    while(abs(r-l) > 1){
        ll mid = (l+r) / 2;
        ll num_a = 0;
        ll num_b = 0;
        // for(int i = 0; i < a.size(); i++) {
        //     if(a[i] <= mid) num_a++;
        // }
        // for(int i = 0; i < b.size(); i++) {
        //     if(b[i] >= mid) num_b++;
        // }
        num_a = upper_bound(a.begin(), a.end(), mid) - a.begin();
        num_b = b.end() - lower_bound(b.begin(), b.end(), mid);
        if(num_a >= num_b) r = mid;
        else l = mid;
    }
    return r;
}

int main(){

    long long n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);    
    for(auto &aa:a) cin >> aa;
    for(auto &bb:b) cin >> bb;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans = bin_search(0, 1e10, a, b);

    cout << ans << endl;

    return 0;
}