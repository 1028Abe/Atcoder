#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, d;
    cin >> a >> b >> d;
    int an = a;
    while(an != b){
        cout << an << " ";
        an += d;
    }
    cout << b << endl;

    return 0;
}