#include <bits/stdc++.h>

using namespace std;



int main(){

    string s;
    cin >> s;
    int n = (int)s.size();
    vector<pair<int, int>> ran;
    for(int left = 0; left < n;){
        int v = s[left] - '0';
        int right = left + 1;
        while(right < n && s[left]==s[right]){            
            right++;
        }
        //cout << right - left;
        ran.push_back({v, right-left});
        left=right;
    }

    for(auto s:ran){
        cout << s.first << " " << s.second << endl;
    }

    return 0;
}