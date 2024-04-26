#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int h, w, m;
    cin >> h >> w >> m;
    ll wc = w, hc = h;

    vector<int> use_h(h, 0), use_w(w, 0), t(m), a(m), x(m);
    for(int i = 0; i < m; i++) {
        cin >> t[i] >> a[i] >> x[i];
        a[i]--;
    }

    int X = 200010;
    vector<ll> cnt(X, 0);

    for(int i = m-1; i >= 0; i--){
        if(t[i]==1){
            if(use_h[a[i]]==0){
                hc--;
                use_h[a[i]] = 1;
                cnt[x[i]] += wc;
            }
        }
        else{
            if(use_w[a[i]]==0){
                wc--;
                use_w[a[i]] = 1; 
                cnt[x[i]] += hc;
            }
        }
    }

    cnt[0] += wc*hc;

    vector<pair<ll, ll>> ans;
    for(int i = 0; i < X; i++){
        if(cnt[i] > 0) ans.push_back({i, cnt[i]});
    }

    cout << ans.size() << endl;

    for(auto a:ans) cout << a.first << " " << a.second << endl;

    return 0;
}