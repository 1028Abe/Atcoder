#include <bits/stdc++.h>

using namespace std;

int main(){

    int r, c;
    cin >> r >> c;
    vector<string> B(r);
    for(auto &b:B){
        cin >> b;
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(B[i][j]=='.') continue;
            if(B[i][j]=='#') continue;
            int effect = B[i][j] - '0';
            B[i][j] = '.';
            for(int k = -effect; k <= effect; k++){
                for(int l = -effect; l <= effect; l++){
                    int y = i + k, x = j + l;
                    if(y < 0 || y > r-1 || x < 0 || x > c-1) continue;
                    int dist = abs(y - i) + abs(x - j);
                    if(dist > effect) continue;

                    if(B[y][x]=='#') B[y][x] = '.';
                }
            }
        }
    }

    for(auto s:B) cout << s << endl;

    return 0;
}