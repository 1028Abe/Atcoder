#include <bits/stdc++.h>

using namespace std;

int main(){
    string t;
    cin >> t;
    int tl = (int)t.size();

    int n;
    cin >> n;

    vector<vector<int>> dp(105, vector<int>(105, 1e9));

    dp[0][0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 105; j++) dp[i+1][j] = dp[i][j];

        int b;
        cin >> b;

        while(b--){
            string s;
            cin >> s;
            int sl = (int)s.size();

            for(int k = 0; k+sl <= tl; k++){
                bool ok = true;
                for(int l = 0; l < sl; l++){
                    if(t[k+l]!=s[l]){
                        ok = false;
                        break;
                    }
                } 
                if(ok) {
                    dp[i+1][k+sl] = min(dp[i+1][k+sl], dp[i][k]+1);
                }
            }
        }
    }

    if(dp[n][tl] > 5e8) dp[n][tl] = -1;
    std::cout << dp[n][tl] << endl;

    return 0;
}