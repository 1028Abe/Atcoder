#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void merge(vector<ll> &A, ll left, ll mid, ll right){
    ll n1 = mid - 1 + 1;
    ll n2 = right - mid;
    vector<ll> Left(n1);
    vector<ll> Right(n2);
    
    ll i, j, k;
    for(i = 0; i < n1; i++){
        Left[i] = A[left + i];
    }
    for(j = 0; j < n2; j++){
        Right[i] = A[mid + 1 + j];
    }

    i = 0; j = 0; k = left;

    while(i < n1 && j < n2){
        if(Left[i] <= Right[i]){
            A[k] = Left[i];
            i++;
        } else{
            A[k] = Right[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        A[k] = Left[i];
        i++;
        k++;
    }
    while(j < n2){
        A[k] = Right[j];
        j++;
        k++;
    }
}

void merge_sort(vector<ll> &A, ll left, ll right){
    if(left < right){
        ll mid = left + (right - left)/2; 
        merge_sort(A, left, mid);
        merge_sort(A, mid + 1, right);
        merge(A, left, mid, right);
    }
}

int main(){

    int n;
    cin >> n;
    vector<pair<int, int>> ab;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ab.emplace_back(a, a + b);
    }
    vector<int> p(n);
    iota(p.begin(), p.end(), 0);
    auto f = [&](int i, int j) {
        auto [ai, aj] = ab[i];
        auto [bi, bj] = ab[j];
        return (long long)ai * bj > (long long)aj * bi;
    };
    stable_sort(p.begin(), p.end(), f);
    for(int i = 0; i < n; i++) cout << p[i] + 1 << " \n"[i == n - 1];

    return 0;
}