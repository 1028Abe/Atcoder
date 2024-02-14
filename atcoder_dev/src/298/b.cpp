#include <bits/stdc++.h>

using namespace std;

int query(int n, int key, const vector<int>& A, const vector<int>& R){
    int dst = -1;
    int max_r = 0;
    for(int i = 0; i < n; i++){
        if(key==A[i] && R[i] > max_r){
            dst = i;
            max_r = R[i];
        }
    }
    return dst;
}

int main(){

    int n, t;
    cin >> n >> t;
    int max_t = 0;
    bool isSameT = false;
    vector<int> C(n);
    vector<int> R(n);

    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        if(c==t) isSameT = true;
        C[i] = c;
    }

    for(int i = 0; i < n; i++) cin >> R[i];

    int key = t;
    if(!isSameT) {
        key = C[0];
    }

    cout << query(n, key, C, R) + 1 << endl;

    return 0;
}