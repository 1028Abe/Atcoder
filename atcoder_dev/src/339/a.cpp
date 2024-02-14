#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;
    
    string ans;
    for(int i = (int)s.size()-1; i >= 0; i--){
        if(s[i]=='.'){
            break;
        }
        ans.push_back(s[i]);
    }
    
    for(int i = (int)ans.size()-1; i >= 0; i--){
        cout << ans[i];
    }cout << endl;

    return 0;
}