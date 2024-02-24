#include <bits/stdc++.h> 

using namespace std;

int main(){

    string s;
    cin >> s;

    map<char, int> a;
    for(int i = 0; i < s.size(); i++){
        a[s[i]]++;
    }

    int mmax = INT_MAX;
    char ans;
    for(const auto& [key, value]:a){
        if(value == 1) ans = key;
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i]==ans) {
            cout << i+1 << endl;
            break;
        }
    }


    return 0;
}