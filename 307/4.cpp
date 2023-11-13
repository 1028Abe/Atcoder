#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    
    int N; cin >> N;
    string S; cin >> S;

    stack<int> memo;
    vector<pair<int, int>> pos;

    for(int i = 0; i < N; i++){
        if(S[i]=='('){
            memo.push(i);
        }
        if(S[i]==')'){
            if(memo.empty()) continue;
            int x = memo.top();
            int y = i;
            memo.pop();
            //pos.push_back({x, y});
            if(!pos.empty()){
                if(x < pos.back().first && y > pos.back().second){
                    pos.back().first = x;
                    pos.back().second = y;
                }
                else pos.push_back({x, y});
            }
            else pos.push_back({x, y});
        }
    }

    if(!pos.empty()){
        for(auto& x:pos) {
            //cout << x.first << " " << x.second << endl;
            for(int i = x.first; i <= x.second; i++){
                S[i] = ' ';
            }
        }
    }

    for(int i = 0; i < N; i++){
        if(S[i]==' ') continue;
        cout << S[i];
    }cout << endl;

    return 0;
}