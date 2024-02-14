#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int n;
    cin >> n;
    string s;
    cin >> s;
    pair<int,int> coord = {0, 0};
    map<pair<int,int>, int> mp;
    mp[coord]++;
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            coord.first++;
            if(mp[coord]==1){
                cout << "Yes" << endl;
                return 0;
            }
            mp[coord]++;
        }
        else if(s[i]=='L'){
            coord.first--;
            if(mp[coord]==1){
                cout << "Yes" << endl;
                return 0;
            }
            mp[coord]++;
        }
        else if(s[i]=='U'){
            coord.second++;
            if(mp[coord]==1){
                cout << "Yes" << endl;
                return 0;
            }
            mp[coord]++;
        }
        else {
            coord.second--;
            if(mp[coord]==1){
                cout << "Yes" << endl;
                return 0;
            }
            mp[coord]++;
        }
    }
    cout << "No" << endl;
}
