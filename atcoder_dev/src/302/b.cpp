#include <bits/stdc++.h>

using namespace std;

void findWord(const vector<string>& grid, int H, int W) {
 
    int x, y;
    //int grid[0].size();
    vector<int> dx{-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> dy{-1, 0, 1, -1, 1, -1, 0, 1};
    string str;

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            for(int k = 0; k < 8; k++){
                str = "";
                for(int t = 0; t < 5; t++){
                    x = i + t*dx[k], y = j + t*dy[k];
                    if(x >= H || x < 0 || y >= W || y < 0) break;
                    str += grid[x][y];
                }
                if(str=="snuke"){
                    for(int t = 0; t < 5; t++){
                        x = i + t*dx[k] + 1, y = j + t*dy[k] + 1;
                        cout << x << " " << y << endl;
                    }
                }
            }
        }
    }
}

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    findWord(grid, H, W);

    return 0;
}