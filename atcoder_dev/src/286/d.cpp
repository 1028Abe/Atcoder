#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x;
    cin >> n >> x;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    vector<vector<int>> dp(n+50, vector<int>(x+50, 0));
    dp[0][0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= x; j++){
            for(int k = 0; k <= b[i]; k++){
                if(j-a[i]*k >= 0){
                    if(dp[i][j-a[i]*k]) dp[i+1][j] = 1;
                }
            }
        }
    }

    if(dp[n][x]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}