#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int cnt_snsi = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s=="For") cnt_snsi++;
    }

    if(cnt_snsi > n/2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}