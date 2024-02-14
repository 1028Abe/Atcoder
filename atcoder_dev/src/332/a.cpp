#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, s, k;
    cin >> n >> s >> k;

    vector<int> P(n), Q(n);
    long sum = 0;
    for(int i = 0; i < n; i++){
        int p, q;
        cin >> p >> q;
        sum += p*q;
    }

    if(sum < s) sum += k;

    cout << sum << endl;

    return 0;
}