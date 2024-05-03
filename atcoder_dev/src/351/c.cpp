#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> A(n);
    for(int &a:A) cin >> a;

    stack<int> stk;

    for(int i = 0; i < n; i++){
        int x = A[i];

        while(!stk.empty() && stk.top()==x){
            x++;
            stk.pop();
        }
        stk.push(x);
    }

    cout << stk.size() << endl;

    return 0;
}