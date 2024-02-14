#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    string S;
    cin >> S;
    int r_now = 0;
    int m_now = 0;
    S += "0";
    int roop = S.size();
    int ans = 0;
    for(int i = 0; i < roop; i++){
        if(S[i]=='0'){
            ans = max(ans, max(m_now + r_now - m, r_now));
            r_now = 0;
            m_now = 0;

        }
        else if(S[i]=='1'){
            m_now++;
        }
        else{
            r_now++;
        }
    }

    cout << ans << endl;

    return 0;
}