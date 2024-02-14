#include <bits/stdc++.h>

using namespace std;

int main(){

    uint n;
    cin >> n;
    int cnt = 0;
    while(n > 0){
        if((n&1)==0){
            cnt++;
            n >>= 1;
        }
        else break;
    }
    
    cout << cnt << endl;

    return 0;
}