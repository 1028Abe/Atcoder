#include <bits/stdc++.h>

using namespace std;

int main(){

    long long a, b;
    cin >> a >> b;

    long long cnt = 0;
    while(a!=b){
        if(a==0 || b==0) break;
        if(a > b){
            if(b==1) {
                cnt += a-1;
                a = 1;
            } else{            
                long long q = a/b;
                if(a-q*b==0){
                    a -= (q-1)*b;
                    cnt += q-1;
                }
                else {
                    a -= q*b;
                    cnt += q;
                }    
            }
        }
        else {
            if(a==1) {
                cnt += b-1;
                b = 1;
            } else{             
                long long q = b/a;
                if(b-q*a==0){
                    b -= (q-1)*a;
                    cnt += q-1;
                }
                else {b -= q*a;
                cnt += q;}
            }
        }
    }
    cout << cnt << endl;
}