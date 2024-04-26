#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> A(n), pos(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        A[i]--;
        pos[A[i]] = i;
    }

    vector<pair<int, int>> ans;

    for(int i = 0; i < n; i++){
        if(i==A[i]) continue;
        int j = pos[i];

        ans.push_back({i, j});
        swap(pos[A[i]], pos[A[j]]);
        swap(A[i], A[j]);
    }

    cout << ans.size() << endl;
    for(auto &[x, y]:ans){
        cout << x+1 << " " << y+1 << endl;
    }

    return 0;
}