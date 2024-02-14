#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    map<int, int> pr;
    for(int i = 0; i < n; i++){
        int key;
        cin >> key;
        pr[key]++;
    }
    long ans = 0;
    for(auto it = pr.begin(), end = pr.end(); it != end; it++){
        ans += (*it).second/2;
    }

    cout << ans << endl;

    return 0;
}