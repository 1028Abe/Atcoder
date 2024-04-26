#include <bits/stdc++.h>
using namespace std;
int main(void){
    
    int n;
    cin >> n;
    vector<string> S(n);
    for(string &s:S) cin >> s;
    
    for(int i = n-1; i >= 0; i--){
        cout << S[i] << endl;
    }
    
}
