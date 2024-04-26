#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    string S;
    cin >> S;

    const long long n = (ll)S.size();
    ll all = n*n - n;
    all /= 2;

    vector<long long> al_num(26, 0);
    for(ll i = 0; i < n; i++){
        int ind = (int)(S[i] - 'a');
        al_num[ind]++;
    }

    bool same = false;
    for(auto &a:al_num){
        if(a>1) same = true;
        ll minus = a*a - a;
        minus /= 2;
        all -= minus;
    }
    
    //Sと同じ文字列になる場合+1
    if(same) all++;
    std::cout << all << endl;

    return 0;
}