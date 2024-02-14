#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int H, W; cin >> H >> W;
    vector<vector<char>> grid(H, vector<char>(W));
    for(int i = 0; i< H; i++){
        for(int j = 0; j < W; j++){
            cin >> grid[i][j];
        }
    }                 

    int x_min = 1e3, x_max = -1e3, y_min = 1e3, y_max = -1e3;                                                       
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(grid[i][j]=='#'){
                x_max = max(x_max, j); x_min = min(x_min, j);
                y_max = max(y_max, i); y_min = min(y_min, i);
            }
        }
    }
    
    for(int i = y_min; i <= y_max; i++){
        for(int j = x_min; j <= x_max; j++){
            if(grid[i][j]=='.') {cout << i + 1 << " " << j + 1 << endl; return 0;}
        }
    }

    return 0;
}