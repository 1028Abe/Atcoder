#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int n; cin >> n;
    vector<int> age(n);
    vector<string> name(n);
    for(int i = 0; i < n; i++){
        cin >> name[i] >> age[i];
    }
    std::vector<int>::iterator iter = std::min_element(age.begin(), age.end());
    int index = std::distance(age.begin(), iter);

    for(int i = index; i < n + index; i++){
        if(i < n){
            cout << name[i] << endl;
        }
        else cout << name[i - n] << endl;
    }

    return 0;
}