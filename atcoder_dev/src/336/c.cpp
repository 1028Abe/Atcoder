#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    n--;
    vector<int> a;
    while(n > 0){
        a.push_back(n%5);
        n /= 5;
    }
    if(a.empty()) a.push_back(0);
    for(long long i = (long long)a.size()-1; i >= 0; i--){
        cout << 2*a[i];
    }cout << endl;

    return 0;
}
