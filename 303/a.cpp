#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int N; cin >> N;
    string S, T;
    cin >> S >> T;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(S[i]==T[i]) cnt++;
        else if((S[i]=='1' && T[i] == 'l') || (S[i]=='l' && T[i]=='1')) cnt++;
        else if((S[i]=='o' && T[i] == '0') || (S[i]=='0' && T[i]=='o')) cnt++;
    }


    if(cnt==N) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}