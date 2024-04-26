#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t;
    cin >> n >> t;
    vector<int> A(t), B(t);
    for(int i = 0; i < t; i++){
        cin >> A[i] >> B[i];
    }

    map<long long, long long> exist;
    exist[0] = n;
    vector<long long> v(n+1, 0);

    long long ans = 1;
    for(int i = 0; i < t; i++){
        exist[v[A[i]]]--;

        if(exist[v[A[i]]]==0) {
            ans--;  
        }

        v[A[i]] += B[i];
        long long val = v[A[i]];

        if((!exist.count(val)) || exist[val]==0){
            ans++;
        }
        exist[val]++;
        cout << ans << endl;
    }

    return 0;
}