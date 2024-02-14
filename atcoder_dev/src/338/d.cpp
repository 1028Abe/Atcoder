    #include<bits/stdc++.h>
    using namespace std;
    using ll = long long;
    int main() {
        int n, m;
        cin >> n >> m;
        vector<int> x(m);
        for (int &i: x) {
            cin >> i;
            --i;
        }
        vector<ll> v(n + 1);

        for(int i = 0; i < m-1; i++){
            int s = x[i], t = x[i+1];
            if(s > t) swap(s, t);
            int a = t - s, b = n - a;
            v[0] += a, v[s] -= a;
            v[s] += b, v[t] -= b;
            v[t] += a, v[n] -= a;
        }

        for(int i = 0; i < n; i++){
            v[i+1] += v[i];
        }

        ll ans = 1LL << 60;
        for (int i = 0; i < n; i++) {
            ans = min(ans, v[i]);
        }
        cout << ans << endl;
    }