#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int n;
    cin >> n;
    
    vector<long long> num(n+1, 0);
    for(long long i = 1; i <= n; i++){
        for(long long j = 1; i*j <= n; j++){
            num[i*j]++;
        }
    }
    
    long long ans = 0;
    for(long long i = 1; i <= n; i++){
        ans += num[n-i]*num[i];
    }
    cout << ans << endl;
}
