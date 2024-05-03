#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> A(200010, 0);
    int m = 0;

    for(int i = 0; i < n; i++) {
        cin >> A[m];
        m++;
        while(m > 1){
            if(A[m-1]==A[m-2]){
                A[m-2]++;
                m--;
            }
            else break;
        }
    }

    cout << m << endl;

    return 0;
}