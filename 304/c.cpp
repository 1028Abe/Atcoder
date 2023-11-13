#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void dfs(const vector<vector<int>>& graph, int v, vector<bool> &ved){
    ved[v] = true;
    int n = graph[0].size();
    for(int i = 0; i < n; i++){
        if(graph[v][i]==1 && !ved[i]){
            dfs(graph, i, ved);
        }
    }
}

int main(){

    int n, d; cin >> n >> d;

    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    vector<bool> ved(n, false);
    ved[0] = true;

    vector<vector<int>> distance(n, vector<int>(n,0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            double dist = sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2));
            if(dist <= d)
            distance[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++){
        if(ved[i]) {
            dfs(distance, i, ved);
        }
    }

    for(auto v : ved){
        if(v) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}