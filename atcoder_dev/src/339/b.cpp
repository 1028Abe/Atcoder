#include <bits/stdc++.h>

using namespace std;



int main(){

    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> g(h, vector<char>(w, '.'));

    int x = 0, y = 0;
    int dir = 0;
    //.白、＃黒
    for(int i = 0; i < n; i++){
        if(g[y][x]=='.'){
            g[y][x] = '#';
            if(dir==0){
                dir++;
                x++;
            }
            else if(dir==1){
                dir++;
                y++;
            }
            else if(dir==2){
                dir++;
                x--;
            }
            else if(dir==3){
                dir = 0;
                y--;
            }  
        }
        else if(g[y][x]=='#'){
            g[y][x] = '.';
            if(dir==0){
                dir = 3;
                x--;
            }
            else if(dir==1){
                dir--;
                y--;
            }
            else if(dir==2){
                dir--;
                x++;
            }
            else if(dir==3){
                dir--;
                y++;
            }                       
        }
        if(x < 0) x += w;
        if(y < 0) y += h;
        if(x > w - 1) x = 0;
        if(y > h - 1) y = 0;     
    }

    for(auto s:g){
        for(auto c:s){
            cout << c;
        }cout << endl;
    }

    return 0;
}