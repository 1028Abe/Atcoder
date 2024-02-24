#include <bits/stdc++.h>

using namespace std;

template<typename T>
struct RSQ{
    const T INF = 0;
    int n;
    vector<T> dat;
    RSQ(int n_) : n(), dat(n_*4, INF){
        int x = 1;
        while(n_ > x){
            x *= 2;
        }
        n = x;
    }
    void update(int ind, T x){
        ind += n - 1;
        dat[ind] = x;
        while(ind > 0){
            ind = (ind-1)/2;
            dat[ind] = dat[ind*2+1] + dat[ind*2+2];
        }
    }

    int get(int ind){
        return dat[ind + n-1];
    };

    T query(int a, int b) {return query_sub(a, b, 0, 0, n);}
    T query_sub(int a, int b, int k, int l, int r){
        if(r <= a || b <= l) return INF;
        if(a <= l && r <= b) return dat[k];
        int vl = 0, vr = 0;
        vl = query_sub(a, b, 2*k + 1, l, (l+r)/2);
        vr = query_sub(a, b, k*2 + 2, (l+r)/2, r);
        return vl + vr;
    }
};

int main(){

    int n, q;
    cin >> n >> q;
    string S;
    cin >> S;
    if(n==1){
        for(int i = 0; i < q; i++){
            int x, l, r;
            cin >> x >> l >> r;
            if(x==2){
                cout << "Yes" << endl;
            }
        }

        return 0;
    }
    RSQ<int> seg(n-1);
    for(int i = 0; i < n-1; i++){
        if(S[i]!=S[i+1]) seg.update(i, 1);
    }

    for(int i = 0; i < q; i++){
        int x, l, r;
        cin >> x >> l >> r;
        l--, r--;
        if(x==1){
            seg.update(l-1, 1-seg.get(l-1));
            seg.update(r, 1-seg.get(r));
        }
        else{
            if(seg.query(l, r)==r-l) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}