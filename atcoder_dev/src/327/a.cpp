#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    string S;
    cin >> S;

    char a = 'a';
    char b = 'b';

    for(int i = 0; i < n-1; i++){
        if((S[i]==a && S[i+1]==b) || (S[i]==b && S[i+1]==a)) {
            cout << "Yes" << endl;
            return 0;
        }

    }

    cout << "No" << endl;

    return 0;
}