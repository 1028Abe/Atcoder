#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void init(vector<vector<int>>& c){
    int ind = 1;
    for(int i = 0; i < c.size(); i++){
        for(int j = 0; j < c.size(); j++){
            c[i][j] = ind++;
        }
    }
}

int main(void){
    // Your code here!
    vector<int> a(3), b(3);
    for(int i = 0; i < a.size(); i++){
        a[i] = i;
        b[i] = i;
    }
    int num = 0;
    vector<vector<int>> c(3, vector<int>(3));
    init(c);
    do{
        do{
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << c[a[i]][b[j]] << " ";
                }cout << endl;
            }
            cout << endl;
            num++;
            cout << num << endl;
        }while(next_permutation(b.begin(), b.end()));
    }while(next_permutation(a.begin(), a.end()));
    cout << num << endl;
}
