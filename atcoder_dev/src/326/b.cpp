#include <bits/stdc++.h>

using namespace std;

void get_digit(int src, vector<int> &digits){

    for(int i = 0; i < 3; i++){
        digits[i] = src%10; 
        src /= 10;
    }
}

bool isLikeNum(const vector<int> &d){
    if(d[2]*d[1] == d[0]) return true;
    return false;
}

int main(){

    int N;
    cin >> N;
    
    vector<int> d(3);
    get_digit(N, d);
    if(isLikeNum(d)) {
        for(int i = 2; i > -1; i--){
            cout << d[i];
        }
        cout << endl;
        return 0;
    }

    while(true){
        N++;
        get_digit(N, d);
        if(isLikeNum(d)) {
            for(int i = 2; i > -1; i--){
                cout << d[i];
            }
            cout << endl;
            return 0;
        }
    }

    return 0;
}