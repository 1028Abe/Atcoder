#include <bits/stdc++.h>

using namespace std;

int calc(const string &S, int x, int s){
    int n = (int)S.size();
    for(int i = s; i < n; i++){
        if(S[i]==x+'0') return i - s + 1;
    }
    return -1;
}

int main(){

    int m;
    cin >> m;

    vector<string> S(3);
    for(string &s:S) {
        cin >> s;
        s += s;
    }

    vector<int> ind = {0, 1, 2};
    
    const int init = 100000100;
    int ans = init;
    for(int i = 0; i <= 9; i++){
        bool isin = true;
        for(int j = 0; j < 3; j++){
            if(S[j].find(i+'0')==string::npos){
                isin = false;
                break;
            }
        }
        
        if(isin){
            do{
                int cost = 0;
                for(int j = 0; j < 3; j++){
                    int p = calc(S[ind[j]], i, cost%m); 
                    if(p==-1) continue;
                    cost += p;
                }
                ans = min(ans, cost-1);
            }while(next_permutation(ind.begin(), ind.end()));
        }
    }

    if(ans==init) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}