#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    deque<pair<int, int>> Q;
    for(int i = 1; i <= n; i++) Q.push_back({i, 0});

    for(int i = 0; i < q; i++){
        int first;
        cin >> first;
        if(first==1){
            char second;
            cin >> second;
            auto [x, y] = Q[0];
            if(second=='R') x++;
            else if(second=='L') x--;
            else if(second=='U') y++;
            else if(second=='D') y--;
            
            Q.push_front({x, y});
            Q.pop_back();
        }
        else{
            int second;
            cin >> second;
            auto[x,y] =  Q[second-1];
            cout << x << " " << y << endl;
        }
    }

    return 0;
}