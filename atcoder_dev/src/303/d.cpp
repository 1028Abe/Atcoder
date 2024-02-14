#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int X, Y, Z;
    string S;
    cin >> X >> Y >> Z >> S;

    bool caps = false;

    ll sum = 0;
    vector<ll> dp(S.size() + 1);
    for(int i = 0; i < S.size(); i++){
        if(caps){
            if(S[i]=='a'){
                if(Y < Z+X){
                    sum += Y;
                }
            }
            else if(S[i]=='A'){

            }
        }
        else{
            if(S[i]=='a'){

            }
            else if(S[i]=='A'){
                
            }
        }
    }

    return 0;
}