#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll max(ll a, ll b, ll c){
    ll dst;
    dst = max(a,b);
    dst = max(dst, c);
    return dst;
}

int main(){

    int N; cin >> N;
    vector<ll> X(N);
    vector<ll> Y(N);

    for(int i = 0; i < N; i++){
        cin >> X[i] >> Y[i];
    }

    vector<vector<ll>> dp(N, vector<ll>(2, -4e18));
    dp[0][1] = 0;
    dp[0][0] = 0;

    if(X[0]==0) dp[0][0] = max(dp[0][0], Y[0]);
    else if(X[0]==1) dp[0][1] = max(dp[0][1], Y[0]);

    for(ll i = 1; i < N; i++){
        if(X[i]==0){
            dp[i][0] = max(dp[i-1][0], dp[i-1][0] + Y[i], dp[i-1][1] + Y[i]);
        }
        else if(X[i]==1){
            dp[i][1] = max(dp[i-1][0] + Y[i], dp[i-1][1]);
        }
        dp[i][0] = max(dp[i][0], dp[i-1][0]);
        dp[i][1] = max(dp[i][1], dp[i-1][1]);

    }
    cout << max(dp[N-1][0], dp[N-1][1]) << endl;

    return 0;
}