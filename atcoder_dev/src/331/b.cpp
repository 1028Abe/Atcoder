#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, s, l;
    cin >> n  >> s >> m >> l;

    int mini = 1e9;

    int S = 6, M = 8, L = 12;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            for(int k = 0; k <= n; k++){
                if(i*S + j*M + k*L >= n){
                    int sum = i*s + j*m + k*l;
                    mini = min(sum, mini);
                }
            }
        }
    }

    cout << mini << endl;

    return 0;
}