#include <bits/stdc++.h>

using namespace std;

int main(){

    int h, w;
    cin >> h >> w;
    vector<string> S(h);
    for(auto& s:S){
        cin >> s;
    }

    for(auto& s:S){
        for(int j = 0; j < w-1; j++){
            if(s[j]=='T' && s[j+1]=='T'){
                s[j] = 'P', s[j+1] = 'C';
                j++;
            }
        }
    }

    for(auto s:S){
        cout << s << endl;
    }
    
    return 0;
}