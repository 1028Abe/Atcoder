#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, q;
    cin >> n >> q;

    deque<int> A(n);
    for(int i = 0; i < n; i++) A[i] = i;
    set<int> called;

    for(int i = 0; i < q; i++){
        int e;
        cin >> e;
        if(e==1){
            called.insert(A.front());
            A.pop_front();
        }
        else if(e==2){
            int x;
            cin >> x;
            x--;
            called.erase(x);
        }
        else{
            cout << *called.begin() + 1 << endl;
        }
    }

    return 0;
}