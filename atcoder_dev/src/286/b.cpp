#include <bits/stdc++.h> 

using namespace std;

int main(){

    int n;
    string s;
    cin >> n >> s;

    string ans = "";
    string nya = "nya";

    int left = 0;
    for(int i = 0; i < n; i++){
        if(s.substr(i, 2)=="na" && i != n-1){
            cout << "nya";
            i++;
        }   
        else cout << s[i];
    }cout << endl;

    return 0;
}