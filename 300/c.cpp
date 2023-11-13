#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dfs(int x, int y, vector<string>& S){
    int count = 1;
    S[x][y] = '.';
    for(int dx = -1; dx < 2; dx++){
        for(int dy = -1; dy < 2; dy++){
            int x2 = x + dx;
            int y2 = y + dy;
            if(0 <=y2 && 0 <= x2 && y2 < S[0].size() && x2 < S.size() && S[x2][y2]=='#'){
                count += dfs(x2, y2, S);
            }
        }
    }
    return count;
}

int main(){

    int H,W;
    cin >> H >> W;

    int N = min(H,W);
    vector<int> res(N,0);
    vector<string> C(H);
    for(auto& s : C) cin >> s;

    for(int i = 1; i < H-1; i++){
        for(int j = 1; j < W-1; j++){
            if(C[i][j]=='#') res[int(dfs(i,j,C)/4) -1]++ ;
        }
    }

    for(auto& x : res) cout << x << " ";
    cout << endl;

    return 0;
}