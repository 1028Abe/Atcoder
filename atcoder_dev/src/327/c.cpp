#include <bits/stdc++.h>

using namespace std;

bool joken1(const vector<vector<int>>& mass){
    for(int i = 0; i < 9; i++){
        map<int, int> a;
        for(int j = 0; j < 9; j++){
            a[mass[i][j]]++;
            if(a[mass[i][j]] >= 2) return false;
        }
    }
    return true;
}

bool joken2(const vector<vector<int>>& mass){
    for(int i = 0; i < 9; i++){
        map<int, int> a;
        for(int j = 0; j < 9; j++){
            a[mass[j][i]]++;
            if(a[mass[j][i]] >= 2) return false;
        }
    }
    return true;
}

bool joken3(const vector<vector<int>>& mass){
    vector<pair<int, int>> cord = {{1,1}, {4,1}, {7,1}, {4,1}, {4,4}, {4,7}, {7,1}, {7,4}, {7,7}};
    for(const auto& c:cord){
        int y = c.first, x = c.second;
        map<int,int> a;

        for(int i = y-1; i <= y + 1; i++){
            for(int j = x-1; j <= x+1; j++){
                a[mass[i][j]]++;
                if(a[mass[i][j]] >= 2) return false;
            }
        }
    }
    return true;
}

int main(){

    vector<vector<int>> mass(9,vector<int>(9,0));
    for(auto &a:mass) for(auto &b:a) cin >> b;
    
    if(!joken1(mass)) {
        cout << "No" << endl;
        return 0;
    }
    if(!joken2(mass)){
        cout << "No" << endl;
        return 0;
    }
    if(!joken3(mass)){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    
    return 0;
}