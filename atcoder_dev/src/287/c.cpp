#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    vector<int> degree(n, 0);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
        degree[a]++, degree[b]++;
    }

    // if(n-1 != m) {
    //     cout << "No" << endl;
    //     return
    // }

    vector<int> ep;
    for(int i = 0; i < n; i++){
        if(degree[i]==1) ep.push_back(i);
        else if(degree[i] > 2 || degree[i]==0){
            cout << "No" << endl;
            return 0;
        }
    }

    if(ep.size()!=2){
        cout << "No" << endl;
        return 0;
    }

    int s = ep[0], t = ep[1];
    vector<int> seen(n, 0);
    queue<int> q;
    q.push(s);
    seen[s]++;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(auto u:g[v]){
            if(seen[u]==0) {
                q.push(u);
                seen[u] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(!seen[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}