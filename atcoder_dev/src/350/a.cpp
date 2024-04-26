#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    string t;
    for(int i = 3; i < s.size(); i++){
        t.push_back(s[i]);
    }

    int a = stoi(t);

    if(a > 0 && a < 350 && a!=316) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}