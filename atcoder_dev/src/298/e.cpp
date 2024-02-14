#include <bits/stdc++.h>

using namespace std;

void solve(const vector<vector<int>>& a, vector<int>& seen, int s){
    queue<int> q;
    q.emplace(s);
    seen[s] = 0;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(auto next:a[now]){
            if(seen[next]!=-1) continue;
            seen[next] = seen[now] + 1;
            q.push(next);
        }
    }
}

int main(){

    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        x--, y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int k;
    cin >> k;
    vector<int> P(k);
    vector<int> D(k);
    for(int i = 0; i < k; i++){
        int p, d;
        cin >> p >> d;
        p--;
        P[i] = p;
        D[i] = d;
    }

    vector<vector<int>> dist(n, vector<int>(n, -1));
    for(int i = 0; i < n; i++){
        solve(g, dist[i], i);
    }

    string ans(n, '1');
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            if(dist[P[i]][j] < D[i]) ans[j] = '0'; 
        }
    }
    for(int i = 0; i < k; i++){
        int now = 1001001001;
        for(int j = 0; j < n; j++){
            if(ans[j]=='1'){
                now = min(now, dist[P[i]][j]);
            }
        }
        if(now!=D[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    cout << ans << endl;

    return 0;
}
