#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> B(m);
    
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    for(int i = 0; i < m; i++) {
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int i = 0, j = 0;
    vector<int> bi;
    vector<int> ai;
    while(i+j < n+m){
        if(j == m && i < n){
            while(i < n){
                ai.push_back(i+j);
                i++;
            }
        }
        else if(j < m && i == n){
            while(j < m){
                bi.push_back(i+j);
                j++;
            }
        }
        else {
            if(A[i] > B[j]) {
                bi.push_back(i+j);
                j++;
            }
            else if(A[i] < B[j]){
                ai.push_back(i+j);
                i++;
            }
        }
    }
    
    for(auto a:ai) cout << a+1 << " ";
    cout << endl;
    
    for(auto b:bi) cout << b+1 << " ";
    cout << endl;
    
}
