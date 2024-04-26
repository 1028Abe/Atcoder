#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<pair<int, int>> coord(n);
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        coord[i] = {x, y};
    }

    for(int i = 0; i < n; i++){
        auto &[ix, iy] = coord[i];
        pair<double, int> ans;

        for(int j = 0; j < n; j++){
            if(i==j) continue;
            auto &[jx, jy] = coord[j];
            double d = sqrt( (jx-ix)*(jx-ix) +  (jy-iy)*(jy-iy) );
            
            if(d-ans.first <= 1e-12){
                if(ans.second > j){
                    ans.second = j;
                }
            }
            else if(d-ans.first > 0) {
                ans.first = d;
                ans.second = j;
            }
        }
        cout << ans.second + 1 << endl;
    }

    return 0;
}