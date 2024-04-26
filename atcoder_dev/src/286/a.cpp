#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    p--, q--, r--, s--;

    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int itr = q - p + 1;
    int ind1 = p, ind2 = r;

    while(itr--){
        swap(A[ind1], A[ind2]);
        ind1++, ind2++;
    }

    for(int a:A) cout << a << " ";
    cout << endl;

    return 0;
}