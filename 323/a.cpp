#include <bits/stdc++.h>

using namespace std;

int main(){

    string S;
    cin >> S;

    for(int i = S.size()-1; i >= 0; i--){
        if(i%2==1 && S[i]!='0'){
            std::cout << "No" << endl;
            return 0;
        }
    }

    std::cout << "Yes" << endl;

    return 0;
}