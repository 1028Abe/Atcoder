#include <bits/stdc++.h>

using namespace std;

int bin(int &l, int &r, int key){
    int mid;
    while(r >= l){
        mid = (l + r)/2;
        if(mid > key) r = mid -1;
        else if(mid == key) return mid;
        else l = mid + 1;
    }
    return mid;
}

int main(){

    int n, l, r;
    cin >> n >> l >> r;

    vector<int> A(n);
    for(auto &a:A) cin >> a;

    for(int i = 0; i < n; i++){
        int left = l;
        int right = r;

        int key = bin(left, right, A[i]);
        cout << key << endl;
        if(i!=n-1) cout << " ";
    }
    cout << endl;

    return 0;
}