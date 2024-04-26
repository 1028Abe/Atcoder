#include <bits/stdc++.h>

using namespace std;

bool match(char a, char b){
    return a==b || a=='?' || b=='?';
}

int main(){

    string s, t;
    cin >> s >> t;

    vector<bool> frt(s.size()+1, 0), ed(s.size()+1, 0);
    frt[0] = 1;

    for(int i = 0; i < (int)t.size(); i++){
        if(match(s[i], t[i])) frt[i+1] = 1;
        else break;
    }

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    ed[0] = 1;
    for(int i = 0; i < (int)t.size(); i++){
        if(match(s[i], t[i])) ed[i+1] = 1;
        else break;
    }

    for(int i = 0; i <= (int)t.size(); i++){
        if(frt[i] && ed[t.size() - i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}