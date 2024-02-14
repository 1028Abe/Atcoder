#include <bits/stdc++.h>

using namespace std;

int main(){

    string N;
    cin >> N;

    if(N.size()==1) {
        cout << "Yes" << endl;
        return 0;
    }

    int n = stoi(N);
    vector<int> a;

    while(n > 0){
        a.push_back(n%10);
        n /= 10;
    }

    for(int i = 0; i < a.size()-1; i++){
        if(a[i] >= a[i+1]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}