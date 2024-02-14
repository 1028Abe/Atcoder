#include <bits/stdc++.h>
using namespace std;

bool dfs(const vector<vector<int>>& g, vector<int>& color, int v, int c){
    color[v] = c;
    for(int i = 0; i < g[v].size(); i++){
        if(color[g[v][i]]==c) return false;
        if(color[g[v][i]]==0 && !dfs(g, color, g[v][i], -c)) return false;
    }
    return true;
}

void solve(const vector<vector<int>>& g, vector<int>& color){
    for(int i = 0; i < g.size(); i++){
        if(color[i]==0){
            if(!dfs(g, color, i, 1)){
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
}

int main(void){

    int n, m; cin >> n >> m;
    vector<int> A(m), B(m);
    for(int i = 0; i < m; i++) cin >> A[i], A[i]--;
    for(int i = 0; i < m; i++) cin >> B[i], B[i]--;

    vector<vector<int>> graph(n);
    vector<int> X(n, -1);
    for(int i = 0; i < m; i++){
        graph[A[i]].push_back(B[i]);
        graph[B[i]].push_back(A[i]);
    }
    vector<int> colors(n, 0);
    solve(graph, colors);
}