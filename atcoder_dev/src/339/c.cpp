#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    long long sum = 0;
    vector<long long> A(n);
    for(long long &a:A) {
        cin >> a;
        sum += a;
    }

    long long a = 0, now = 0;
    for(int i = 0; i < n; i++){
        now += A[i];
        if(now < 0){
            a += -now;
            now = 0;
        }
    }

    cout << a + sum << endl;

    return 0;
}