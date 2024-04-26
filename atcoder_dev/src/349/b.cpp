#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    map<char, int> cc;

    for(int i = 0; i < (int)s.size(); i++){
        cc[s[i]]++;
    }

    bool ok = true;
    for(int i = 1; i <= 100; i++){
        int cnt = 0;
        for(auto it = cc.begin(); it != cc.end(); it++){
            int num = (*it).second;
            if(num==i) cnt++;
        }
        if(cnt!=2 && cnt!=0) {
            ok = false;
            break;
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}