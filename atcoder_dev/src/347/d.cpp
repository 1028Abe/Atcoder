#include <bits/stdc++.h>

using namespace std;

typedef unsigned long ul;

int main(){

    ul a,b;
    cin >> a >> b;

    ul C;
    cin >> C;

    ul c = __builtin_popcountl(C);

    if(a+b < c || a+c < b || b+c < a || (a+b+c)%2==1 || a+b+c > 120){
        cout << "-1" << endl;
        return 0;
    }

    ul n00, n10, n01, n11;
    n00 = 60 - (a+b+c)/2, n10 = (a-b+c)/2, n01 = (-a+b+c)/2, n11 = (a+b-c)/2;


    ul X = 0, Y = 0;

    for(int i = 59; i >= 0; i--){
        X *= 2;
        Y *= 2;
        if(1 & (C>>i)){
            if(n10){
                X++;
                n10--;
            }
            else {
                Y++;
                n01--;
            } 
        }
        else {
            if(n11){
                X++;
                Y++;
                n11--;
            }
            else {
                n00--;
            } 
        }
    }

    cout << X << " " << Y << endl;

    return 0;
}