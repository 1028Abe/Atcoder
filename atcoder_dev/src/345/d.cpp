#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, h, w;
    cin >> n >> h >> w;

    int left = 0, right = 1;
    vector<int> C(n), V(n);
    for(int i = 0; i < n; i++) cin >> C[i] >> V[i];
    
    vector<pair<int, int>> check;
    long long ans = 0;
    for(left = 0; left < n;){
        right = left + 1;
        int max_v = V[left];
        while(right < n && C[left]==C[right]) {
            max_v = max(max_v, V[right]);
            right++;
        }
        check.push_back({C[left], max_v});
        left = right;
        ans += max_v;
    }

    cout << ans << endl;

    return 0;
}