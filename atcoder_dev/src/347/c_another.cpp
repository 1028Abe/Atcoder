#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a, b;
    cin >> n >> a >> b;

    int w = a + b;
    set<int> ss;
    for(int i = 0; i < n; i++) {
        int d;
        cin >> d;
        d %= w;
        ss.insert(d);
        //ss.insert(d+w);
    }

    int k = (int)ss.size();
    vector<int> d;
    for(auto s:ss){
        d.push_back(s);  
        cout << s << " ";
    }cout << endl;

    for(int i = 0; i < k; i++){
        d.push_back(d[i]+w);
    }

    for(auto dd:d) cout << dd << " ";
    cout << endl;

    for(int i = 0; i < 2*k; i++){
        int r;
        if(i < k-1) r = (d[i+1] - d[i])%w;
        else if(i==2*k-1) r = (d[i] - d[0])%w;
        cout << r << endl;
        if(r < 0) r += w;

        if(r > b) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}