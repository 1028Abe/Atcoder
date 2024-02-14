#include<bits/stdc++.h>

using namespace std;

int main(){

    string s, t;
    cin >> s >> t;

    vector<string> a, b;
    a = {"AB", "BA", "BC", "CB", "CD", "DC", "DE","ED", "EA", "AE"};
    //b = {"AC", "CA", "BD", "DB", "CE", "EC", "DA", "DA"};

    bool s_a = false, t_a = false;

    for(int i = 0; i < a.size(); i++){
        if(s==a[i]) s_a = true;
        if(t==a[i]) t_a = true;
    }

    if(s_a && t_a) cout << "Yes" << endl;
    else if(!s_a && !t_a) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}