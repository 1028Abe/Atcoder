#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int num = 21;
    vector<int> water(21);
    for(int i = 0; i < num; i++){
        water[i] = 5*i;
    }

    int N; cin >> N;

    int min = 10000;
    int ans = 0;
    for(int i = 0; i < num; i++){
        int distance = abs(water[i] - N);
        if(min > distance){
            min = distance;
            ans = water[i];
        }
    }

    cout << ans << endl;

    return 0;
}