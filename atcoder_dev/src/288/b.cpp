#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    set<string> SS;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(i < k){
            SS.insert(s);
        }
    }

    for(auto it = SS.begin(); it != SS.end(); it++){
        cout << *it << endl;
    }

    return 0;
}