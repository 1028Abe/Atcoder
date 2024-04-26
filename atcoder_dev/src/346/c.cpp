#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k; 
    cin >> n >> k;

    unsigned long long ans = 0;

    if(k%2==0){
        ans = k/2;
        ans *= k+1;
    }else{
        ans = (k+1)/2;
        ans *= k;
    }

    map<int, int> check;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        check[a]++;
        if(k >= a && check[a] == 1) {
            ans -= a;
            check[a] = 1;
        }
    }

    cout << ans << endl;

    return 0;
}