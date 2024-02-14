#include <bits/stdc++.h>                                                                                                                                                                            >
using namespace std;
int main(void){
    string s;
    cin >> s;
    for(int i = 0, end = (int)s.size(); i < end; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
