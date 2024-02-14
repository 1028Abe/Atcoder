#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int> count_win(N, 0);
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        for(int j = 0; j < N; j++){
            if(s[j]=='o') count_win[i]++;
        }
    }
    vector<int> ans;
    for(int i = N-1; i >= 0; i--){
        vector<int> tmp;
        for(int j = 0; j < N; j++){
            if(i==count_win[j]) cout << j + 1 << " ";
        }
        // for(int k = 0; k < tmp.size(); k++){
        //     cout << tmp[k] << " ";
        // }
    }cout << endl;

    return 0;
}