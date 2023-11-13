#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, M; cin >> N >> M;
    vector<int> A(M);
    for(auto &a:A) cin >> a;

    for(int i = 1; i <= N; i++){
        auto it = lower_bound(A.begin(), A.end(), i);
        if(*it == i)cout << 0 << endl;
        else cout << A[it-A.begin()] - i << endl;
    }

    return 0;
}