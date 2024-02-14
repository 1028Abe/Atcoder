#include <bits/stdc++.h>

using namespace std;

int  main(){

    int n;
    long d;
    cin >> n >> d;
    vector<long>  t(n);
    for(auto &x:t) cin >> x;

    for(int i = 0; i < n-1; i++){
        if(t[i+1] - t[i] <= d){
            cout <<  t[i+1] << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}