#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int N, M, H, K; cin >> N >> M >> H >> K;
    string S; cin >> S;
    set<pair<int, int>> crd;
    for(int i = 0; i<M; i++){
        int x, y;
        cin >> x >> y;
        crd.insert(make_pair(x,y));
    }

    int cx = 0;
    int cy = 0;

    for(int i = 0; i < N; i++){
        if(S[i]=='R'){
            cx++; 
        }
        else if(S[i]=='L'){
            cx--;
        }
        else if(S[i]=='U'){
            cy++;
        }
        else if(S[i]=='D'){
            cy--;
        }

        H--;
        if(H < 0) {
            cout << "No" << endl;
            return 0;
        }
        if((H < K) && (crd.count({cx, cy}))){
            H = K;
            
            crd.erase({cx, cy});
        }
    }
    cout << "Yes" << endl;
    return 0;
}