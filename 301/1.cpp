#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int N; string S; cin >> N >> S;
    int cnt_a = 0;
    int cnt_t = 0;
    int half = N/2;
    for(auto& s : S){
        if(s == 'A') cnt_a++;
        else if(s == 'T') cnt_t++;

        if(half <= cnt_a) {cout << 'A' << endl; break;}
        if(half <= cnt_t) {cout << 'T' << endl; break;}
    }

    return 0;
}