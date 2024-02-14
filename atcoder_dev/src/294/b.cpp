#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int h, w;
    cin >> h >> w;
    vector<vector<char>> A(h, vector<char>(w, '.'));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            int a;
            cin >> a;
            if(a!=0) A[i][j] = char(a + 64);
        }
    }
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << A[i][j];
        }cout << endl;
    }
    return 0;
}