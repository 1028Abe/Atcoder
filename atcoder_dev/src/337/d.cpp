#include <bits/stdc++.h>

using namespace std;

int main(){

    int h, w, k;
    cin >> h >> w >> k;
    vector<string> S(h);
    for(int i = 0; i < h; i++){
        cin >> S[i];
    }

    vector<int> dots(200010, 0), xs(200010, 0);
    int ans = 1e9;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            xs[j+1] = xs[j];
            dots[j+1] = dots[j];
            if(S[i][j]=='x') xs[j+1]++;
            else if(S[i][j] == '.') dots[j+1]++;
        }
        for(int j = 0; j <= w - k; j++){
            if(xs[j+k]-xs[j] == 0) ans = min(ans, dots[j+k] - dots[j]);
        }
    }

    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            xs[j+1] = xs[j];
            dots[j+1] = dots[j];
            if(S[j][i]=='x') xs[j+1]++;
            else if(S[j][i] == '.') dots[j+1]++;
        }
        for(int j = 0; j <= h - k; j++){
            if(xs[j+k]-xs[j] == 0) ans = min(ans, dots[j+k] - dots[j]);
        }
    }

    if(ans > k) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}