#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for(int i = 0; i < k; i++){
        cin >> a[i];
    }

    vector<int> pref(k+1, 0), preb(k+1, 0);

    for(int i = 1; i < k+1; i++){
        pref[i] = pref[i-1];
        if(i%2==0) pref[i] = a[i-1] - a[i-2];
    }

    for(int i = k-1; i >= 0; i--){
        preb[i] = preb[i+1];
        if((k-i)%2==0) preb[i] += a[i+1] - a[i];
    }

    int ans = 1e9;
    for(int i = 0; i <= n; i+=2){
        ans = min(ans, preb[i]+ pref[i]);
    }

    cout << ans << endl;

    return 0;
}