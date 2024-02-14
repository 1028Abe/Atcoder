#include <bits/stdc++.h>
using namespace std;

const long long mod = 998244353;

int main(void){
    int n;
    cin >> n;
    vector<vector<int>> cards(n, vector<int>(2, 0));
    
    for(int i = 0; i < n; i++){
        int f, b;
        cin >> f >> b;
        cards[i][0] = f;
        cards[i][1] = b;
    }
    vector<vector<long long>> dp(n, vector<long long>(2, 0));
    dp[0][0] = 1;
    dp[0][1] = 1;
    for(int i = 1; i < n; i++){
        for(int f = 0; f <= 1; f++){
            for(int b = 0; b <= 1; b++){
                if(cards[i][b]==cards[i-1][f]) continue;
                dp[i][b] += dp[i-1][f];
            }
        }
        dp[i][0] %= mod;
        dp[i][1] %= mod;
    }
    
    cout << (dp[n-1][0] + dp[n-1][1])%mod << endl;
    
    return 0;
}
