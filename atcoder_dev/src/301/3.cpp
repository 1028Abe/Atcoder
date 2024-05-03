#include <bits/stdc++.h>

using namespace std;

int main(){

    string S, T;
    cin >> S >> T;
    string base = "atcoder";

    vector<int> ns(26, 0), nt(26, 0);
    int at_num_s = 0, at_num_t = 0;
    for(auto s:S) {
        if(s=='@') at_num_s++;
        else ns[s - 'a']++;
    }
    for(auto t:T) {
        if(t=='@') at_num_t++;
        else nt[t - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        char c = i + 'a';
        if(base.find(c)==string::npos){
            if(ns[i] < nt[i] || ns[i] > nt[i]){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    for(auto c:base){
        int i = c - 'a';
        if(ns[i] < nt[i]) at_num_s-=nt[i]-ns[i];
        else if(ns[i] > nt[i]) at_num_t-=ns[i]-nt[i];
    }

    if(at_num_s >= 0 && at_num_t >= 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    // cout << "s_@ " << at_num_s << " lack" << lack_s << endl;
    // cout << "t_@" << at_num_t << " lack" << lack_t << endl;

    return 0;
}