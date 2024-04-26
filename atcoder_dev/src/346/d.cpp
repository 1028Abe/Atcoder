#include <bits/stdc++.h>

using namespace std;

int main(){

    const long long INF = 1000000000000000000;
    int n;
    cin >> n;

    string S;
    cin >> S;

    vector<int> C(n);
    for(int &c:C) cin >> c;

    vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(2, vector<long long>(2, INF)));
    
    if(S[0]=='0'){
        dp[0][0][0] = 0;
        dp[0][0][1] = C[0];
    }else{
        dp[0][0][0] = C[0];
        dp[0][0][1] = 0;
    }

    for(int i = 1; i < n; i++){
        //0にする
        dp[i][0][0] = dp[i-1][0][1];
        dp[i][1][0] = min(dp[i-1][0][0], dp[i-1][1][1]);
        //1にする
        dp[i][0][1] = dp[i-1][0][0];
        dp[i][1][1] = min(dp[i-1][0][1], dp[i-1][1][0]);

        if(S[i] == '0'){
            dp[i][0][1] += C[i]; 
            dp[i][1][1] += C[i]; 
        }else{
            dp[i][0][0] += C[i]; 
            dp[i][1][0] += C[i]; 
        }
    }

    long long ans = min(dp[n-1][1][0], dp[n-1][1][1]);

    cout << ans << endl;

    return 0;
}