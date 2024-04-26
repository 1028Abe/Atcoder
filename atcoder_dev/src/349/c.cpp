#include <bits/stdc++.h>

using namespace std;

bool substr(const string &s, const string &t){
    int i = 0;
    for(char c:s){

        if(c-'a' == t[i]-'A'){
            i++;
        }
        cout << i << endl;
        if(i == t.size()) return true;
    }

    return false;
}

int main(){

    string s, t;
    cin >> s >> t;

    if(t[2]=='X') t.pop_back();

    if(substr(s, t)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}