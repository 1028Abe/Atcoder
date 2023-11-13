#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    string S, T;
    cin >> S >> T;
    string base = "atcoder";

    int num_at_S = count(S.begin(), S.end(), '@');
    int num_at_T = count(T.begin(), T.end(), '@');

    bool ok = true;

    for(char c = 'a'; c <= 'z'; c++){

        int num_atcoder_S = 0;
        int num_atcoder_T = 0;
        for(auto s:S) if(s==c) num_atcoder_S++;
        for(auto t:T) if(t==c) num_atcoder_T++;

        if(num_atcoder_S != num_atcoder_T && !count(base.begin(), base.end(), c)) ok = false;

        if(num_atcoder_S > num_atcoder_T) num_at_S -= num_atcoder_S - num_atcoder_T;
        else num_at_T -= num_atcoder_T - num_atcoder_S;
    }

    if(num_at_S < 0 || num_at_T < 0) ok = false;
    

    cout << (ok ? "Yes" : "No") << endl;

    return 0;
}