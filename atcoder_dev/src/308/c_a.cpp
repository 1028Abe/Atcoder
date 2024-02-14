#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    vector<int> A(n), B(n);
    for(int i = 0; i < n; i++){
        cin >> A[i] >> B[i];
    }

    set<pair<double, int>> ans;
    for(int i = 0; i < n; i++){
        double memo = A[i];
        double d = A[i] + B[i];
        memo /= d;

        ans.insert({memo, i+1});
    }
    for(auto i = ans.rbegin(); i != ans.rend(); i++){
        cout << (*i).second << " " ;
    }cout << endl;

    return 0;
}