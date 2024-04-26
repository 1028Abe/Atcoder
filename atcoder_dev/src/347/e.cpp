#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, q;
    cin >> n >> q;
    vector<int> X(q);
    for(auto &e:X) cin >> e;
    for(auto &e:X) e--;

    const int N = 200050;
    vector<long long> A(n, 0), S(q+1, 0);
    vector<int> once(N, -1);

    int sl = 0;
    for(int i = 0; i < q; i++){
        if(once[X[i]]==-1){
            sl++;
            S[i+1] += sl + S[i];
            once[X[i]] = i;
        }
        else {
            sl--;
            S[i+1] += sl + S[i];
            A[X[i]] += S[i] - S[once[X[i]]];
            once[X[i]] = -1;
        }
        //cout << X[i] << " : |S| " << sl << endl;
    }

    for(int i = 0; i < N; i++){
        if(once[i] != -1){
            A[i] += S[q] - S[once[i]];
        }
    }

    for(long long a:A) cout << a << " ";
    cout << endl;
 
    return 0;
}