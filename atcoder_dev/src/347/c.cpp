#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a, b;
    cin >> n >> a >> b;

    int w = a + b;
    vector<int> D(n);
    for(int i = 0; i < n; i++) {
        cin >> D[i];
        D[i] %= w;
    }

    sort(D.begin(), D.end());

    for(int i = 0; i < n; i++){
        D.push_back(D[i] + w);
    }

    for(int i = 0; i < n; i++){
        int l = D[i], r = D[i + n -1];
        if(r - l + 1 <= a){
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;

    return 0;
}