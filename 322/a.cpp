#include <bits/stdc++.h>

using namespace std;

int main(){

    char a = 'A', b = 'B', c = 'C';

    int n; 
    string s;
    cin >> n >> s;

    for(int i = 0; i <= n - 3; i++){
        if(s[i]==a && s[i+1] == b && s[i+2] == c){
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}