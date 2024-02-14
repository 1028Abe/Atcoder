#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    string S;
    cin >> S;
    
    for(int i = 0, n = (int)S.size(); i < n-1; i+=2){
        char tmp;
        tmp = S[i];
        S[i] = S[i+1];
        S[i+1] = tmp;
    }
    cout << S << endl;
}