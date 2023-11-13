#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int n; cin >> n;

    vector<int> A(n), B(n);
    for(int i = 0; i < n; i++){
        cin >> A[i] >> B[i];
    }

    set<pair<double, int>> ans;
    for(int i = 0; i < n; i++){
        double memo = A[i];
        double d = A[i] + B[i];
        memo /= d;

        ans.insert({memo, i+1});
    }

    for(auto i = ans.begin(); i != ans.end(); i++){

    }

    for(auto it = ans.rbegin(), e = ans.rend(); it!=e; it++) {

        auto check = e;
        check--;
        if(check==it) cout << (*it).second << " ";
        else{
            double now_val, nxt_val;
            int now_idx, nxt_idx;
            now_val = (*it).first; now_idx = (*it).second;
            it++;
            nxt_val = (*it).first; nxt_idx = (*it).second;

            if(now_val == nxt_val){
                set<int> idx;
                idx.insert(now_val);idx.insert(nxt_val);
                now_val = nxt_val;
                now_idx = nxt_val;
                it++;
                nxt_val = (*it).first; nxt_idx = (*it).second;
                while(now_val != nxt_val){
                    idx.insert(now_val);idx.insert(nxt_val);
                    now_val = nxt_val;
                    now_idx = nxt_val;
                    if(check==it) break;
                    it++;
                    nxt_val = (*it).first; nxt_idx = (*it).second;
                }            
                for(auto i = idx.begin(); i != idx.end(); i++) cout << *i << " ";

            }
            else{
                cout << now_idx << " ";
                it--; 
            }
        }
        
        //cout << std::fixed << std::setprecision(15) << (*it).first << endl;
    }
    cout << endl;

    return 0;
}