#include <bits/stdc++.h>

using namespace std;

bool kaibun(string &s){
    int n = (int)s.size();

    for(int i = 0; i < i/2; i++){
        if(s[i]!=s[n - i -1]) 
            return false;
    }

    return true;
}

int main(){

    int n;
    long long a, b;
    cin >> n >> a >> b;
    string S;
    cin >> S;
    S += S;

    long long ans = 1ll << 60;

    for(int i = 0; i < n; i++){
        long long tmp = a*i;
        for(int j = 0; j < n/2; j++){
            if(S[j+i]!=S[n+i-j-1]) tmp += b;
        }
        ans = min(ans, tmp);
    }
    
    cout << ans << endl;

    return 0;
}