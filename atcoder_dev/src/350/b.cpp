#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, q;
    cin >> n >> q;
    vector<int> T(q);
    for(int &a:T) {
        cin >> a;
        a--;
    }

    vector<int> tooth(n, 1);

    for(int i = 0; i < q; i++){
        if(tooth[T[i]]){
            tooth[T[i]] = 0;
        }
        else {
            tooth[T[i]] = 1;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(tooth[i]) ans++;
    }

    cout << ans << endl;

    return 0;
}