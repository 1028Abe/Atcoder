#include <bits/stdc++.h> 

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> P(n, 0);
    for(int i = 0; i < n; i++){       
        int x; 
        cin >> x;
        x--;
        P[x] = i;
        //cout << P[x] << endl;
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        if(P[a] < P[b]) cout << a + 1 << endl;
        else cout << b + 1 << endl;
    }    

    return 0;
}