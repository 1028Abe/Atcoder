#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par, rank, siz;

    UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1) { }

    int root(int x) {
        if (par[x]==-1) return x; 
        else return par[x] = root(par[x]); 
    }

    bool issame(int x, int y) {
        return root(x)==root(y);
    }

    bool unite(int x, int y) {
        int rx = root(x), ry = root(y); 
        if (rx==ry) return false; 
        // union by rank
        if (rank[rx]<rank[ry]) swap(rx, ry); 
        par[ry] = rx; 
        if (rank[rx]==rank[ry]) rank[rx]++; 
        siz[rx] += siz[ry]; 
        return true;
    }

    int size(int x) {
        return siz[root(x)];
    }
};

int main(void){
    int n, m;
    cin >> n >> m;
    if(m==0) {
        for(int i = 0; i < n; i++){
            cout << i + 1 << " ";
        }cout << endl;
        return 0;
    }
    
    UnionFind uf(n);
    vector<int> A(m);
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        a--;
        A[i] = a;
        uf.unite(a, a+1);
    }
    
    set<int> roots;
    vector<vector<int>> cc(n);
    for(int i = 0; i < n; i++){
        int rt = uf.root(i);
        roots.insert(rt);
        cc[rt].push_back(i);
    }
    for(auto it = roots.begin(); it != roots.end(); it++){
        int v = *it;
        for(int i = cc[v].size()-1; i >= 0; i--){
            cout << cc[v][i] + 1 << " ";
        }
    }cout << endl;
}
