#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a%2==0) {
            cout << a;
            if(i != n-1) cout << " ";
        }
    }cout << endl;
    
    return 0;
}
