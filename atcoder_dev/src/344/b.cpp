#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> A;
    int a;
    while(cin >> a){
        A.push_back(a);
    }

    for(int i = A.size()-1; i >= 0; i--) cout << A[i] << endl;

    return 0;
}