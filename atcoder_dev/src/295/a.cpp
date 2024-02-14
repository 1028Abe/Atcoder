#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<string> S = {"and", "not", "that", "the", "you"};
    for(int i = 0; i < n; i++){
        string w;
        cin >> w;
        for(auto s:S){
            if(w==s) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}