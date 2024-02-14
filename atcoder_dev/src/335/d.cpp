#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int first = 1;
    int end = (n-1)/2;

    vector<vector<int>> S(n, vector<int>(n, 0));  
    int y = 0, x = 0;
    int v = 1;
    while(y != end && x != end){
        if(x==0 && y==0){
            for(; x < n; x++)
                S[y][x] = v++;
        }
        else if(x==n-1 && y==0){
            for(; y < n; y++){
                S[y][x] = v++;
             }
        }
        else if(x==n-1 && y==n-1){
            for(; x > 0; x--){
                S[y][x] = v++;
             }
        }
        else (x==1 && y==n-1){
            for(; y < n; y++){
                S[y][x] = v++;
             }
        }
    }

    return 0;
}