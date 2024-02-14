#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int N = 30;
const int M = 30;



int main(){

    int h, w;
    cin >> h >> w;

    vector<string> a(h), b(h);
    for(auto& s : a) cin >> s;
    for(auto& s : b) cin >> s;

    for(int s = 0; s < h; s++){
        for(int t = 0; t < w; t++){
            int ok = 1;
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if(a[(i - s + h)%h][(j - t + w)%w] != b[i][j]) ok = 0;
                }
            }
            if(ok) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
     
    cout << "No" << endl;

    return 0;
}