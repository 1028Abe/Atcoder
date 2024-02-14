#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> w(n);
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin >> w[i];
        cin >> x[i];
    }

    int max_num = 0;

    for(int i = 0; i <= 24; i++){
        int num = 0;
        for(int j = 0; j < n; j++){
            int time = i + x[j];
            if(time > 24) time -= 24;
            else if(time < 0) time += 24;

            if(9 <= time && time + 1 <= 18){
                num += w[j];
            }
        }
        max_num = max(max_num, num);
    }

    cout << max_num << endl;

    return 0;
}