#include <bits/stdc++.h>

using namespace std;

template<typename T>
void copy(const vector<T> &a, vector<T> &b){
    int n = (int)a.size();
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
}

int main(){

    int n, x;
    cin >> n >> x;
    vector<long long> A(n-1);

    for(long long &a:A) {
        cin >> a;
    }

    for(int i = 0; i < 101; i++){
        vector<long long> b(n);
        copy(A, b);
        b[n-1] = i;
        sort(b.begin(), b.end());

        //for(auto bb:b) cout << bb << " ";
        //cout << endl;

        long long sum = 0;
        for(int j = 1; j <= n-2; j++){
            sum += b[j];
        }

        //cout << sum << endl;

        if(sum>=x){
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;

    return 0;
}