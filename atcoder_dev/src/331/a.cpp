#include <bits/stdc++.h>

using namespace std;

int main(){

    int M, D;
    cin >> M >> D;
    int y, m, d;
    cin >> y >> m >> d;

    if(d + 1 >= D){
        if(m==M){
            cout << y + 1 << " " <<  1 << " " << 1 << endl;
        }
        else cout << y << " " << m + 1 <<  " " << 1 << endl;
        return 0;
    }

    cout << y << " " << m << " " << d + 1 << endl;

    return 0;
}