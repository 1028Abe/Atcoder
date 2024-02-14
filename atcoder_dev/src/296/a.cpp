#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string S;
    cin >> n >> S;

    for(int i = 1; i < n; i++){
        if(S[i] == S[i-1]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}