#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int N; cin >> N;
    vector<int> A(N); for(auto& a:A) cin >> a;

    for(auto it = A.begin()+1; it != A.end(); it++){
        if(*(it) - *(it-1) == 1) continue;
        
        if(*(it) - *(it-1) > 1) 
            it = A.insert(it, *(it-1) + 1);
        else if(*(it-1) - *(it) > 1)
            it = A.insert(it, *(it-1) - 1);
    }
    
    for(auto i = A.begin(); i != A.end(); i++){
        cout << *i << " ";
    }cout << endl;

    return 0;
}