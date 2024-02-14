#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> A(n);
    for(auto& a:A) {
        int x;
        cin >> x;
        if(x!=-1) x--;
        a = x;
    }
    vector<vector<int>> g(n, vector<int>(1,0));

    int s;
    for(int i = 0; i < n; i++){
        if(A[i]==-1) {
            s = i;
            continue;
        }
        g[A[i]][0] = i;
    }
    queue<int> q;
    q.push(s);
    vector<bool> visited(n, false);
    visited[s] = true;
    while(n--){
        int now = q.front();
        cout << now + 1 << " ";
        q.pop();
        for(auto next:g[now]){
            if(visited[next]==false) q.push(next);
        }
    }cout << endl;

    return 0;
}