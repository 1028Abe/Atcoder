#include <bits/stdc++.h>
using namespace std;

int main(void){

    string S;
    cin >> S;

    long long ans = 0;
    int sl = (int)S.size();

    long long add = 26;
    for(int i = 0; i < sl-1; i++) {
        ans += add;
        add *= 26;
    }

    long long num = 0;
    for(int i = 0; i < sl; i++){
        num *= 26;
        num += (S[i] - 'A');
    }
    cout << ans + 1 + num << endl;
}