#include <bits/stdc++.h>

using namespace std;

    void encode(const string& str, vector<pair<char, int>>& dst){
    int n = (int)str.size();
    for(int l = 0; l < n;){
        int r = l + 1;
        while(r < n && str[r]==str[l]) r++;
        dst.push_back({str[l], r-l});
        l = r;
    }
}

int main(){

    string S;
    cin >> S;
    vector<pair<char, int>> enc;
    encode(S, enc);
    for(int i = 1; i < enc.size(); i++){
        char now, pre;
        now = enc[i].first;
        pre = enc[i-1].first;
        if(now < pre){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}