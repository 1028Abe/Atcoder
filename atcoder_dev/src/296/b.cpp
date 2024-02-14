#include<bits/stdc++.h>

using namespace std;

int main(){

    int n = 8;

    vector<string> SS = {
        "a8b8c8d8e8f8g8h8",
        "a7b7c7d7e7f7g7h7",
        "a6b6c6d6e6f6g6h6",
        "a5b5c5d5e5f5g5h5",
        "a4b4c4d4e4f4g4h4",
        "a3b3c3d3e3f3g3h3",
        "a2b2c2d2e2f2g2h2",
        "a1b1c1d1e1f1g1h1"
    };


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char c;
            cin >> c;
            if(c=='*'){
                string ans = {SS[i][2*j]};
                ans += {SS[i][2*j+1]};
                cout << ans << endl;
                return 0;
            }
        }
    }

    return 0;
}