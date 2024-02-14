#include <bits/stdc++.h>

using namespace std;

int main(){

    int N; cin >> N;
    vector<int> P(N);
    for(auto &p:P) cin >> p;

    int k = 1;
    double c = 0.9;
    int top = 0;
    int bottom = 0;
    vector<double> dp(N+1, DBL_MIN);

    double b_sum = 0.0;
    double t_sum = 0.0;
    for(int i = 0; i < N; i++){
        double tmp = pow(0.9, N-i+1);
        b_sum += tmp;
        t_sum += tmp*P[i];
    }
    double r_all = t_sum/b_sum - 1200/sqrt(N);

    dp[0] = DBL_MIN;
    for(int i = 1; i < N+1; i++){
        k++;
        double p = pow(c, k-i-1);
        double r = (top + p*P[i-1])/(bottom+p) - 1200/sqrt(k);
        if(dp[i-1] < r){
            dp[i] = r;
            top += p*P[i-1];
            bottom += p;
        }
        else k--;
    }

    cout << fixed << setprecision(10) << dp[N] << endl;

    return 0;
}