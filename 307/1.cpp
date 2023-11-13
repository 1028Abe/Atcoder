#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int ans = 0;
        for(int j = 0; j < 7; j++){
            int a;
            cin >> a;
            ans += a;
        }
        if(i==0) cout << ans;
        else cout << " " << ans; 
    }
    cout << endl;
    

    return 0;
}