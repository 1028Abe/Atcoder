#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;
    vector<int> pos;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='|') pos.push_back(i);
    }

    int r = pos[1], l = pos[0];

    for(int i = 0; i < s.size(); i++){
        if(i >= l && i <= r) continue;
        cout << s[i];
    }cout << endl;

    return 0;
}