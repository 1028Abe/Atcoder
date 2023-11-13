#include <bits/stdc++.h>

using namespace std;

int compress(vector<int> &parents, int a){
    while(a!=parents[a]){
        parents[a] = parents[parents[a]];
        a = parents[a];
    }
    return a;
}

int link(vector<int> &parents, int a, int b){
    a = compress(parents, a);
    b = compress(parents, b);
    if(a < b) return parents[b] = a;
    else return parents[a] = b;
}

int main(){

    int h, w; cin >> h >> w;

    vector<string> in(h);
    for(int i = 0; i < h; i++){
        cin >> in[i];
    }

    vector<pair<int, int>> offset = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}};
    vector<vector<int>> label(h, vector<int>(w, 0));
    vector<int> parents;

    int index = 0;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(in[i][j]!='#') continue;
            label[i][j] = index;
            bool doLink = false;
            for(auto d:offset){
                int dy = d.first, dx = d.second;
                if(dy+i < 0 || dy+i > h-1 || dx+j < 0 || dx+j > w-1) {
                    continue;
                }
                if(in[dy+i][dx+j]=='#') {
                    //if(label[i+dy][i+dx]!=0)
                    parents[label[i][j]] = (index);
                    label[i][j] = link(parents, label[i][j], label[i+dy][j+dx]);
                    parents.pop_back();
                    doLink = true;
                }
            }
            if(!doLink) {
                //label[i][j] = index++;
                parents.push_back(index++);
            }
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(label[i][j]==0) continue;
            label[i][j] = parents[label[i][j]];
        }
    }

    for(auto i:label){
        for(auto j:i){
            cout << j << " ";
        }cout << endl;
    }

    cout << parents.size() << endl;

    return 0;
}