#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<long> R = {1, 11, 111, 1111, 11111, 
                        111111, 1111111, 11111111, 111111111, 1111111111,
                        11111111111, 111111111111};
    int s = 0;
    int cnt = 0;

    set<long long> ans;
    for(int i = 0; i < R.size(); i++){
        for(int j = i; j < R.size(); j++){
            for(int k = i; k < R.size(); k++){
                ans.emplace(R[i]+R[j]+R[k]);
            }
        }
    }
    cout << ans.size() << endl;
    auto it = ans.begin();
    for(int i = 0; i < n-1; i++) it++;
    cout << *it << endl;
    return 0;
}