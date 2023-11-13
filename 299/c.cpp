#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){

    int N;
    std::string S;
    std::cin >> N >> S;

    int max = 0;
    for(int f = 0; f < 2; f++){
        int count = 0;
        for(int i = 0; i < N; i++){
            if(S[i]=='-'){
                max = std::max(max, count);
                count = 0;
            }
            else count++;
        }
        std::reverse(begin(S), end(S));
    }
    if(max) {
        std::cout << max << std::endl;
    }
    else {
        std::cout << -1 << std::endl;
    }
    return 0;
}
