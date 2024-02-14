#include <bits/stdc++.h>
using namespace std;



int main(void){
    int n, q;
    cin >> n >> q;
    vector<unsigned int> R(n);
    for(int i = 0; i < n; i++){
        cin >> R[i];
    }
    
    sort(R.begin(), R.end());
    
    vector<long long> prefix(n+1, 0);
    for(int i = 1; i < n+1; i++){
        prefix[i] = prefix[i-1] + R[i-1];
    }
    
    
    for(int i = 0; i < q; i++){
        long long x;
        cin >> x;
        auto it = upper_bound(prefix.begin(), prefix.end(), x);
        cout << it - prefix.begin() -1 << endl;
    }
    
}