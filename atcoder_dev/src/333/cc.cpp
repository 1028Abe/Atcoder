#include <bits/stdc++.h>

using namespace std;

struct UnionFind{
    vector<int> par;
    UnionFind(int N) : par(N){
        for(int i = 0; i < N; i++) par[i] = i;
    }
    int root(int x){
        if(par[x]==x) return x;
        return par[x] = root(par[x]);
    }
    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx==ry) return;
        par[rx] = ry;
    }
    bool same(int x, int y){
        int rx = root(rx);
        int ry = root(ry);
        return rx == ry;
    }
};

vector<vector<int>> g(1000);

int main(){

    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    vector<int> par(n, -1);
    UnionFind tree(n); 
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        tree.unite(a,b);
    }

    int result = 0;
    for(int i = 0; i < n; i++){
        if(tree.root(i)==i){
            ++result;
        }
    }

    cout << result << endl;

    return 0;
}