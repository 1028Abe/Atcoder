#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    int left = 0, right = 1;
    vector<int> C(n), V(n);
    for(int i = 0; i < n; i++) cin >> C[i] >> V[i];
    
    //vector<pair<int, int>> check;
    long long ans = 0;
    int num_om = 0;

    vector<int> clr, val;

    for(left = 0; left < n;){
        right = left + 1;
        int max_v = V[left];
        while(right < n && C[left]==C[right]) {
            max_v = max(max_v, V[right]);
            right++;
        }
        //check.push_back({C[left], max_v});
        clr.push_back(C[left]);
        val.push_back(max_v);
        if(right - left > 1) num_om += right - left-1;
        left = right;
        ans += max_v;
    }

    for(int i = 0; i < clr.size(); i++){
        cout << clr[i] << " ";
    }cout<< endl;

    if(num_om > k){
        cout << -1 << endl;
        return 0;
    }
    else if(num_om==k){
        cout << ans << endl;
        return 0;
    }

    int sz = (int)clr.size();
    k -= num_om; 
    vector<vector<int>> dp(sz+1, vector<int> (k+1, -100));

    cout << ans << endl;

    return 0;
}