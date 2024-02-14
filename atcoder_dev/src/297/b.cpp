#include <bits/stdc++.h>

using namespace std;

int main(){

    string S;
    cin >> S;

    vector<int> Bs;
    vector<int> Rs;
    int k = 0;
    for(int i = 0; i < S.size(); i++){
        if(S[i]=='R') Rs.push_back(i+1);
        if(S[i]=='B') Bs.push_back(i+1);
        if(S[i]=='K') k = i+1;
    }
    if(Bs.size()!=2 || Rs.size()!=2 || k == 0) {
        cout << "論理が破綻しています" << endl;
        return 0;
    }

    if((Bs[0]+Bs[1])%2==0){
        cout << "No" << endl;
        return 0;
    }
    if(k < Rs[0] || k > Rs[1]){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}