#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    string s;
    cin >> s;
    for(char c:s){
        if(c=='0') cout << '1';
        else cout << '0';
    }cout << endl;
    
    return 0;
}
