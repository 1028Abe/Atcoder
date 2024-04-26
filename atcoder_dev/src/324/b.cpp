#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long two = 0, three = 0;

    while(n%2==0){
        two++;
        n /= 2;
    }

    while(n%3==0){
        three++;
        n /= 3;
    }

    if(n!=1){
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }

    //cout << two << " " << three << endl;

}