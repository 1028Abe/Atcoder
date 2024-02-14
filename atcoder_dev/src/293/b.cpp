#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int n;
    cin >> n;
    vector<int> A(n);
    for(auto &a:A) {
        int x;
        cin >> x;
        x--;
        a = x;
    }
    
    vector<bool> called(n, false);
    for(int i = 0; i < n; i++){
        if(!called[i]) {
            called[A[i]] = true;
        }
    }
    vector<int> ans;
    int num = 0;
    for(int i = 0; i < n; i++){
        if(!called[i]){
            num++;
            ans.push_back(i);
        }
    }
    cout << num << endl;
    for(int i = 0; i < num; i++){
        cout << ans[i]+1;
        if(i!=num-1) cout << " ";
    }cout << endl;
}
