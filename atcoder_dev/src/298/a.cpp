#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string s;
    cin >> n >> s;

    int pos_ast;
    vector<int> pos_l;

    for(int i = 0; i < n; i++){
        if(s[i]=='*') pos_ast = i;
        else if(s[i]=='|') pos_l.push_back(i);
    }

    if(pos_ast > pos_l[0] && pos_ast < pos_l[1]) cout << "in" << endl;
    else cout << "out" << endl;

    return 0;
}