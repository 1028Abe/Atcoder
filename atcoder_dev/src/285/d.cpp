#include <bits/stdc++.h> 

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<vector<string>> graph(n);
    map<string, string> to;
    vector<string> T(n), S(n);
    for(int i = 0; i < n; i++){
        string s, t;
        cin >> s >> t;
        to[s] = t;
        S[i] = s;
        T[i] = t;
    }

    set<string> used;
    for(string ss:S){
        string ns = ss;
        while(!used.count(ns)){
            used.insert(ns);
            auto it = to.find(ns);
            if(it==to.end()) break;
            ns = it->second;
            if(ns==ss) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}