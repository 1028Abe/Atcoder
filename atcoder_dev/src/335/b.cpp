#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;
    while(x <= n){
        if(x + y + z <= n) cout << x << " " << y << " " << z << " "<< endl;
            
        z++;
        if(z > n) {
            z = 0;
            y++;
        }
        if(y > n){
            y = 0;
            x++;
        }
    }

    return 0;
}