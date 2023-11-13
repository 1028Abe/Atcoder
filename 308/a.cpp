#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    vector<int> S(8);
    for(auto &s: S) cin >> s;

    for(int i = 0; i < 8; i++){
        if(S[i] < S[i-1]) {
            cout << "No" << endl;
            return 0;
        }
        if(S[i] < 100 || S[i] > 675){
            cout << "No" << endl;
            return 0;
        }
        if(S[i]%25 != 0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}