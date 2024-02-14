#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    if(s[0] >= 'a' && s[0] <= 'z') {
        cout << "No" << endl;
        return 0; 
    }
    for(int i = 1; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}