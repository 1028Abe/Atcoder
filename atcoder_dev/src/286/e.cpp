#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> A(n);
    for(auto &a:A) cin >> a;

    vector<string> S(n);
    for(string &s:S) cin >> s;

    int q;
    cin >> q;

    vector<int> v(q), u(q);
    for(int i = 0; i < q; i++){
        cin >> v[i] >> u[i];
    }

    return 0;
}