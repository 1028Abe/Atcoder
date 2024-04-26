#include <bits/stdc++.h>
using namespace std;

int prime(int n){
    int dst = 1;
    for(int i = 1; i*i <= n; i++){
        int d = i*i;
        if(n%d == 0) dst = d;
    }
    return n/dst;
}

int main(void){

    int n;
    cin >> n;
    vector<int> A(n);
    for(auto &a:A) cin >> a;
    
    unordered_map<int, long long> num;
    
    for(int i = 0; i < n; i++){
        if(A[i]==0) num[A[i]]++;
        else num[prime(A[i])]++;
    }

    long long cnt = 0;

    auto it_zero = num.find(0);
    if(it_zero != num.end()){
        int key = (*it_zero).first; 
        long long v = (*it_zero).second;
        for(long long i = 1; i <= v; i++) cnt += n - i;
    }

    for(auto it = num.begin(); it!=num.end(); it++){
        int key = (*it).first; 
        long long v = (*it).second;
        if(key == 0) continue;
        cnt += v*(v-1)/2;
    }
    
    cout << cnt << endl;
    
}