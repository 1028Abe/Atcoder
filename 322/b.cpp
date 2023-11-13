#include <bits/stdc++.h>

using namespace std;

int main(){

    bool head = true, tail = true;

    int N, M;
    cin >> N >> M;

    string S, T;
    cin >> S >> T;

    for(int i = 0; i < N; i++){
        //cout << S[i] << " " << T[i] << " ";
        if(S[i] !=T [i]) {
            head = false;
            break;
        }
    }

    for(int i = 0; i < N; i++){
        //cout << S[i] << " " << T[M - N + i] << " ";
        if(S[i] !=T [M - N + i]){
            tail = false;
            break;
        }
    }

    if(head && tail) cout << 0 << endl;
    else if(head && !tail) cout << 1 << endl;
    else if(!head && tail) cout << 2 << endl;
    else if(!head && !tail) cout << 3 << endl;

    return 0;
}