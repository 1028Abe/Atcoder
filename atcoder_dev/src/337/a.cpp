#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int X= 0;
    int Y=0;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        X += x;
        Y += y;
    }

    if(X==Y) cout << "Draw" << endl;
    else if(X>Y) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
}