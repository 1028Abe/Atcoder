#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    map<int, int> ac;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(ac.find(b)==ac.end()){
            ac[b] = a;
        }
        else {
            ac[b] = min(ac[b], a);
        }
    }
    
    int ans = 0;
    for(auto it = ac.begin(); it!=ac.end(); it++){
        ans = max(it->second, ans);
    }

    cout << ans << endl;

    return 0;
}