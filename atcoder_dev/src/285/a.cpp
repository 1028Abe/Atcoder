#include <bits/stdc++.h>
using namespace std;
int main(void){

    int a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    if(b/2==a) cout << "Yes" << endl;
    else cout << "No" << endl;
}