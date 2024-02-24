#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n; cin >> n;
    string S; cin >> S;
    int q; cin >> q;

    vector<vector<int>> al(26);
    const int first = 97;
    for(int i = 0; i < 26; i++){
        al[i].push_back(first+i);
    }
    
    while(q--){
        char c, d;
        cin >> c >> d;
        for(auto& a:al){
            int ci = c;
            int di = d;
            if(a[a.size()-1] == c) a.push_back(di);
        }
    }
    
    for(auto& s:S){
        int code = s;
        code -= first;
        s = al[code][al[code].size()-1];
    }
    string ans;
    cout << S << endl;

    return 0;
}