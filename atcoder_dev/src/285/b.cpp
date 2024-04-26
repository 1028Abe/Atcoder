#include <bits/stdc++.h>
using namespace std;
int main(void){

    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int l = 0;
    for(int i = 1; i < n; i++){
        l = 0;
        for(int j = 0; j < n; j++){
            if(i+j > n-1) break;
            if(s[j]!=s[j+i]) l++;
            else break;
        }
        cout << l << endl;
    }
}