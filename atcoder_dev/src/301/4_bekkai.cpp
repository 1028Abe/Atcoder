#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    string S; cin >> S;
    ll N; cin >> N;
    vector<ll> value;
    ll ans = 0;

    for(ll i = 0; i < (ll)S.size(); i++){
        ll tmp = (1LL << S.size() - i - 1);
        if(S[i]=='?'){
            value.push_back(tmp);
        }
        else if(S[i]=='1'){
            ans += tmp;
        }
    }
    if(ans > N) {
        cout << -1 << endl;
        return 0;
    }
    for(auto& v : value){
        if(ans + v <= N){
            ans += v;
        }
    }
    cout << ans << endl;

    return 0;
}