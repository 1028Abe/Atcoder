#include <bits/stdc++.h>

using namespace std;

// Union-Find
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

int main(){
    int n, m;
    cin >> n >> m;

    long long ans = 0;
    UnionFind uf(n);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        x--, y--;
        if(uf.issame(x, y)) ans++;
        uf.unite(x, y);
    }

    cout << ans << endl;

    return 0;
}