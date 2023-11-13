#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    vector<int> dist = {0, 3, 4, 8, 9, 14, 23};
    const int org = 65;
    char p, q; cin >> p >> q;
    int dp = int(p) - org;
    int dq = int(q) - org;

    //cout << dp << " " << dq << endl;

    cout << abs(dist[dq] - dist[dp]) << endl;

    return 0;
}