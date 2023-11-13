#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    
    int n; cin >> n;
    vector<string> S(n);
    for(int i = 0; i < n; i++){
        cin >> S[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==j) continue;

            string bun = S[i] + S[j];
            //cout << bun << endl;
            bool ok = true;
            int M = bun.size();

            for(int k = 0; k < M/2; k++){
                if(bun[k] != bun[M-k-1]){
                    ok = false;
                    //break;
                } 
            }
            if(ok){
                //cout << bun << endl;
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}