#include <bits/stdc++.h>
using namespace std;
struct Edge {
    long long to;
    long long cost;
};
using Graph = vector<vector<Edge>>;
using P = pair<long, int>;
const long long INF = 1LL << 60;
/* dijkstra(G,s,dis)
    入力：グラフ G, 開始点 s, 距離を格納する dis
    計算量：O(|E|log|V|)
    副作用：dis が書き換えられる
*/
void dijkstra(const Graph &G, int s, vector<long long> &dis) {
    int N = G.size();
    dis.resize(N, INF);
    priority_queue<P, vector<P>, greater<P>> pq;  // 「仮の最短距離, 頂点」が小さい順に並ぶ
    dis[s] = 0;
    pq.emplace(dis[s], s);
    while (!pq.empty()) {
        P p = pq.top();
        pq.pop();
        int v = p.second;
        if (dis[v] < p.first) {  // 最短距離で無ければ無視
            continue;
        }
        for (auto &e : G[v]) {
            if (dis[e.to] > dis[v] + e.cost) {  // 最短距離候補なら priority_queue に追加
                dis[e.to] = dis[v] + e.cost;
                pq.emplace(dis[e.to], e.to);
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    Graph g(n);
    for(int i = 0; i < n-1; i++){
        int a, b, x;
        cin >> a >> b >> x;
        a, b, x--;
        Edge A, B;
        A.to = i+1, A.cost = a;
        B.to = x, B.cost = b;
        g[i].push_back(A);
        g[i].push_back(B);
    }

    vector<long long> dist(n+100, INF);
    dijkstra(g, 0, dist);
    cout << dist[n-1] << endl;

    return 0;
}