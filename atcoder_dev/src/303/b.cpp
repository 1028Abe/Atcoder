#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int toComb(int n){
    return n*(n-1)/2;
}

int main(){

    int N, M; cin >> N >> M;
    
    vector<vector<int>> A(M, vector<int>(N));
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }

    set<pair<int, int>> memo;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N-1; j++){
                int x = A[i][j];
                int y = A[i][j+1];
                memo.insert({min(x,y), max(x,y)});
        }
    }
    int ans = toComb(N) - memo.size();
    cout << ans << endl;

    return 0;
}