#include <bits/stdc++.h>

using namespace std;

long floor_div(long x, long y) {
  long d = x / y;
  return d * y == x ? d : d - ((x < 0) ^ (y < 0));
}

int ceil_div(int x, int y) {
  int d = x / y;
  return d * y == x ? d : d + ((x > 0) ^ (y < 0));
}

int main(){
    int n;
    cin >> n;
    vector<long> Q(n), A(n), B(n);
    long qmax = 0;
    for(auto &q:Q) {
        cin >> q;
        qmax = max(qmax, q);
    }
    for(auto &a:A) cin >> a;
    for(auto &b:B) cin >> b;

    long ans = 0;
    for(long x = 0; x <= qmax; x++){
        long y = 1e10;
        for(long i = 0; i < n; i++){
            if(B[i] > 0){
                y = min(y, floor_div(Q[i]-A[i]*x, B[i]));
                continue;
            }
            if(Q[i] < A[i]*x){
                y = -1e10;
                break;
            }
        }
        ans = max(ans, (long)(x + y));
    }

    cout << ans << endl;
   
    return 0;
}