#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    const int mod = 998244353; 
    int N, M; cin >> N >> M;    
    vector<vector<ll>> dp(2, vector<ll> (N+1000,0));
    dp[1][1] = M;
    for(int i = 1; i < N; i++){
        dp[0][i+1] += dp[0][i]*(M-2);
		dp[0][i+1] += dp[1][i]*(M-1);

		dp[1][i+1] += dp[0][i];

		dp[0][i+1] %= mod;
		dp[1][i+1] %= mod;
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j <= N; j++){
            cout << dp[i][j] << " ";
        }cout << endl;
    }
    cout << (dp[0][N])%mod << endl;

    return 0;
}