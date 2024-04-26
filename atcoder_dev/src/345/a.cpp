#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    bool migi = false, eq = false, hidari = false;
    int k = 0;

    for(int i = 0; i < (int)s.size(); i++){
        if(i==0 && s[i]=='<') hidari = true;
        if(i==(int)s.size()-1 && s[i]=='>') migi = true;
        if(s[i]== '=') k++;
        }

    if(k == (int )s.size() - 2) eq = true;

    if(migi && eq && hidari) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}