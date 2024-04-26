#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 0; i <=n; i++){
        int mn = 100;
        for(int j = 1; j <= 9; j++){
            if((n/j)*j != n) continue;
            if(i%(n/j)==0){
                mn = min(mn, j);
            }
        }
        if(mn!=100) cout << mn;
        else cout << "-";
    }cout << endl;

    return 0;
}