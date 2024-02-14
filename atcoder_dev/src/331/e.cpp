#include <bits/stdc++.h> 

using namespace std;

int main(){

    int n, m, l;
    cin >> n >> m >> l;
    vector<long> A(n), B(m);
    for(auto& a:A) cin >> a;
    for(auto& b:B) cin >> b;

    set<pair<int, int>> bad;
    for(int i = 0; i < l; i++){
        int c, d;
        cin >> c >> d;
        bad.emplace(c-1, d-1);
    }

    vector<int> ord_b(m);
    for(int i = 0; i < m; i++) ord_b[i] = i;
    sort(begin(ord_b), end(ord_b), [&](int i, int j) {return B[i] > B[j];});

    vector<int> cur(n);
    priority_queue<pair<int, int>> Q;
    for(int i = 0; i < n; i++) Q.emplace(A[i]+B[ord_b[cur[i]]], i);
    while(true){
        auto [cost, i] = Q.top();
        int j = cur[i];
        Q.pop();
        if(bad.count({i, ord_b[j]})==0){
            cout << cost << endl;
            break;
        }
        cur[i]++;
        if(cur[i]!=m) Q.emplace(A[i]+B[ord_b[cur[i]]], i);
    }

    return 0;
}