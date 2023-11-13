#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int n; cin >> n;
    int num1 = 1000, num2 = 10000, num3 = 100000, num4 = 1000000,
    num5 = 10000000, num6 =  100000000, num7 = 1000000000;
    if(num1 > n){
        cout << n << endl;
    }
    else if(num2 > n && (num1) <= n){
        cout << n - (n%10) << endl;
    }
    else if(num3 > n && (num2) <= n){
        cout << n - (n%100) << endl;
    }
    else if(num4 > n && (num3) <= n){
        cout << n - (n%1000) << endl;
    }
    else if(num5 > n && (num4) <= n){
        cout << n - (n%10000) << endl;
        
    }
    else if(num6 > n && (num5) <= n){
        cout << n - (n%100000) << endl;

    }
    else if(num7 > n && (num6) <= n){
        cout << n - (n%1000000) << endl;
    }




    return 0;
}