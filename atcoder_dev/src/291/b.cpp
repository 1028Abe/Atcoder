#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    deque<int> dq(5*n);
    for(int i = 0; i < 5*n; i++){
        int d;
        cin >> dq[i];
    }
    sort(dq.begin(), dq.end());
    for(int i = 0; i < n; i++){
        dq.pop_back();
        dq.pop_front();
    }
    int sum = 0;
    for(auto q:dq) {
        sum += q;
    }
    
    double ans = (double)sum/(dq.size());
    cout << fixed << setprecision(15) << ans << endl;
}
