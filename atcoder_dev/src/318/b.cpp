#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n), d(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<vector<int>> area(101, vector<int>(101, 0));
    for(int i = 0; i < n; i++){
        for(int j = c[i]; j < d[i]; j++){
            for(int k = a[i]; k < b[i]; k++){
                if(!area[j][k]) area[j][k] = 1;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < 101; i++){
        for(int j = 0; j < 101; j++){
            if(area[i][j]) ans++;
        
        }
    }

    cout << ans << endl;

    return 0;
}