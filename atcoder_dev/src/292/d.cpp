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
    // Your code here!
    int n, m;
    cin >> n >> m;
    UnionFind uf(n);
    vector<int> A(m), B(m);
    
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        uf.unite(a, b);
        A[i] = a;
        B[i] = b;
    }
    
    vector<int> num_n(n, 0), num_m(n, 0);
    for(int i = 0; i < n; i++){
        num_n[uf.root(i)]++;
    }
    for(int i = 0; i < m; i++){
        num_m[uf.root(A[i])]++;
    }
    
    if(num_m == num_n) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
    
}
