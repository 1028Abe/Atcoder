#include <bits/stdc++.h>

using namespace std;

int main(){

    //b:5 w:7
    string S_tmp = "wbwbwwbwbwbw";
    string S = "wbwbwwbwbwbw";
    int w, b;

    cin >> w >> b;
    while(S.size() <= S_tmp.size() + w + b){
        S += S_tmp;
    }

    int cnt_w = 0, cnt_b= 0;
    for(int i = 0; i < S.size(); i++){

        cnt_w = 0, cnt_b = 0;
        for(int j = 0; j < w + b; j++){
            if(i + j < S.size()) {
                if(S[i+j]=='w') cnt_w++;
                else if(S[i+j]=='b') cnt_b++;
                if(w == cnt_w && b== cnt_b) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}