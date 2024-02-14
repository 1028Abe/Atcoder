#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void iterate_num(set<ll> &s, const vector<int> &a, ll x){
    //int n = (int)a.size();
    for(const auto& a_i:a){
        ll nx = x + a_i;
        s.insert(nx);
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto& x:a) cin >> x;

    set<ll> s;
    s.insert(0);
    for(int i = 0; i < k; i++){
        ll x = *s.begin();
        s.erase(x);
        iterate_num(s, a, x);
    }]

    cout << *s.begin() << endl;

    return 0;
}