#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> A(n);
    for(int &a:A) cin >> a;

    int q;
    cin >> q;
    vector<int> ans;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        if(x==1){
            int k, y;
            cin >> k >> y;
            A[k-1] = y;
        }
        else if(x==2){
            int k;
            cin >> k;
            ans.push_back(A[k-1]);
        }
    }

    for(int a:ans) cout << a << endl;

    return 0;
}