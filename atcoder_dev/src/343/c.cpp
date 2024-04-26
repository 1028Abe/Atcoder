#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;
    cin >> n;

    long long ans = 0;
    for(long long i = 0; i*i*i <= n; i++){
        long long c = i*i*i;
        string s = to_string(c);
        bool kaibun = true;
        for(int j = 0; j < (int)s.size()-1; j++){
            if(s[j]!=s[(int)s.size()-1-j]) {
                kaibun = false;
                break;
            }
        }
        if(kaibun) ans = c;
    }

    cout << ans << endl;

    return 0;
}