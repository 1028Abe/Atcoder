#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, X;
    cin >> N  >> X;

    vector<int> a;
    int max_znt = 0;
    int min_znt = 101;
    int sum_znt = 0;

    for(int i = 0; i < N - 1; i++){
        int x;
        cin >> x;
        sum_znt += x;
        max_znt = max(x, max_znt);
        min_znt = min(x, min_znt);
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    if(a.size()==2){
        if(a[0]==X) {
            cout << 0 << endl;
            return 0;
        }
        else if(a[1]==X) {
            cout << a[1] << endl;
            return 0;
        }
    }

    int tmp = X - (sum_znt -(max_znt + min_znt));
    // cout << max_znt << endl;
    // cout << min_znt << endl;
    // cout << tmp << endl;
    if(tmp > 100) {
        cout << -1 << endl;
        return 0;
    }
    else {
        if(tmp == 0) {
            cout << 0 << endl;
            return 0;
        }
        else if(tmp != 0)
        if(tmp < max_znt && tmp > min_znt) {
            cout << tmp << endl;
            return 0;
        }
    }

    if(tmp + max_znt == X){
        cout << max_znt << endl;
        return 0;
    } 
    else if(tmp + min_znt == X){
        cout << 0 << endl;
        return 0;
    }

    cout << -1 << endl;

    return 0;
}