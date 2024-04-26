#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, l;

    cin >> n;
    vector<int> A(n);
    for(auto &a:A) cin >> a;

    cin >> m;
    vector<int> B(m);
    for(auto &a:B) cin >> a;

    cin >> l;
    vector<int> C(l);
    for(auto &a:C) cin >> a;

    int q;
    cin >> q;
    vector<int> X(q);
    for(auto &x:X) cin >> x;

    //vector<int> AB(n+m);
    map<int, int> AB;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            AB[A[i]+B[j]]++;
        }
    }

    for(int i = 0; i < q; i++){
        bool same = false;
        for(int j = 0; j < l; j++){
            int ans = X[i] - C[j]; 
            if(AB.count(ans) != 0){
                same = true;
                break;
            }
        }
        if(same) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}