#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    long long ans = 0;
    while(!s.empty()){
       if(s.back()=='0'){
            ans++;
            s.pop_back();
            if(s.back()=='0') s.pop_back();
        }
        else{
            ans++;
            s.pop_back();
        }
    }

    cout << ans << endl;

    return 0;
}