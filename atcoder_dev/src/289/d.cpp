#include <bits/stdc++.h> 

using namespace std;

int main(){

    long long n;
    cin >> n;
    vector<long long> A(n);
    for(auto &a:A) cin >> a;

    long long m;
    cin >> m;
    map<long long, long long> B;
    for(long long i = 0; i < m; i++){
        long long b;
        cin >> b;
        B[b]++;
    }
    
    long long x;
    cin >> x;

    vector<bool> dp(100100, true);
    dp[0] = true;

    for(long long i = 0; i <= x; i++){
        if(B[i]==1) {
            dp[i] = false;
        }
        for(long long j = 0; j <= n; j++){
            long long ind = i - A[j];
            if(ind < 0) continue;
            if(dp[ind]) dp[i] = dp[i] | dp[ind];
        }
    }

    if(dp[x]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}