#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<vector<int>> G(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> G[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(G[i][j]==1){
                cout << j+1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}