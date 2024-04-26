#include <bits/stdc++.h>

using namespace std;

int main(){

    int h, w;
    vector<vector<char>> grid(h, vector<char>(w, 0));
    vector<vector<int>> EN(h, vector<int>(w, 0));

    pair<int, int> S, T;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> grid[i][j];
            if(grid[i][j]=='S'){
                S = {i, j};
            }
            else if(grid[i][j]=='T'){
                T = {i, j};
            }
        }
    }

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int r, c, e;
        r--, c--;
        EN[r][c] = e;
    }

    int en;
    queue<pair<int,int>> q;
    q.push(S);

    



    return 0;
}