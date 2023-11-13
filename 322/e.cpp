#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int N, K, P;
    cin >> N >> K >> P;

    vector<long> C(N);
    vector<vector<int>> A(N, vector<int>(K));

    for(int i = 0; i < N; i++){
        cin >> C[i];
        for(int j = 0; j < K; j++){
            cin >> A[i][j];
        }
    }

    vector<int> dp(N+1, 1e6);
    
    return 0;
}