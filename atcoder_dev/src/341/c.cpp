#include <bits/stdc++.h>

using namespace std;

int main(){

    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;

    set<pair<int, int>> pos;
    
    int x = 0, y = 0;
    for(auto c:t){
        if(c=='R') x++;
        else if(c=='L') x--;
        else if(c=='U') y--;
        else if(c=='D') y++;
        pos.insert({y, x});

        //cout << "座標チェック " << y << " " << x;
    }

    vector<string> S(h);
    for(auto &s:S) cin >> s;

    //cout << "pos size " << (int)pos.size() << endl;
    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(S[i][j]=='#') continue;
            int num = 0;

            for(auto it = pos.begin(); it != pos.end(); it++){
                int x = j, y = i;
                int y_ = (*it).first, x_ = (*it).second;
                x += x_, y += y_;
                if(y > h-1 || x > w-1 || x < 0 || y < 0) break;
                if(S[y][x]=='#') break; 
                num++;
            }
            if(num==(int)pos.size()) ans++;
            //cout << "num " << num << endl;
        }
    }

    cout << ans << endl;

    return 0;
}