#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int N; cin >> N;
    string S; cin >> S;

    string ans(2*N, ' ');
    for(int i = 0; i < 2*N; i++){
        ans[i] = S[i/2];
    }

    for(int i = 0; i < 2*N; i++){
        cout << ans[i];
    }cout << endl;

    return 0;
}