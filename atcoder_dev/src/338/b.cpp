#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    map<char, int> ss;
    for(char c:s){
        ss[c]++;
    }

    char base = 'A';
    int num = 0;

    for(char c = 'a'; c <= 'z'; c++){
        if(ss[c] > num){
            num = ss[c];
            base = c;
        }
    }

    cout << base << endl;

    return 0;
}