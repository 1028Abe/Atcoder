#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y;
    cin >> x >> y;

    int z = x - y;

    if(z<=0 && z>=-2) {cout << "Yes" << endl; return 0;}
    else if(z >= 0 && z<=3) {cout << "Yes" << endl; return 0;}
    else cout << "No" << endl;

    return 0;
}