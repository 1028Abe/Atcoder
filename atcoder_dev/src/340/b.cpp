#include <bits/stdc++.h>

using namespace std;

int main(){

    int Q;
    cin >> Q;
    vector<long> A;
    while(Q--){
        int q;
        cin >> q;

        if(q==1){
            long v;
            cin >> v;
            A.push_back(v);
        }
        else if(q==2){
            int ind;
            cin >> ind;
            cout << A[((int)A.size()) - ind] << endl;
        }
    }

    return 0;
}