#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i++){
        cout << S[i];
        if(i==S.size()-1) cout << endl;
        else cout << " ";
    }
    
    return 0;
}
