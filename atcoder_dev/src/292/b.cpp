#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int n, q; 
    cin >> n >> q;
    vector<vector<int>> p(n);
    for(int i = 0; i < q; i++){
        int f, s;
        cin >> f >> s;
        s--;
        if(f==1){
            p[s].push_back(1);
        }
        else if(f==2){
            p[s].push_back(2);
        }
        else if(f==3){
            if(p[s].empty()) cout << "No" << endl;
            else {
                if(p[s].size()==2) cout << "Yes" << endl;
                else if(p[s][0]==2) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
        }
    }
}
