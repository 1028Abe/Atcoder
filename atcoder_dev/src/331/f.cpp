#include<bits/stdc++.h>

using namespace std;

int  main(){

    // int n, q;
    // cin  >> n >> q;
    string S;
    cin >> S;

    bool isP = true;
    for(int i = 0; i < S.size()/2; i++){
        if(S[i]!=S[S.size()-i-1]){
            isP = false;
            break;
        }
    }

    if(isP) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}