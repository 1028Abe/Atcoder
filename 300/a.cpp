#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bin_search(int key, const vector<int>& c){

    int ok = c.size()-1;
    int ng = -1;

    while(abs(ok - ng) > 1){
        int mid = (ok + ng)/2;
        if(c[mid]==key) ok = mid;
        else ng = mid;
    }
    return ok;
}

int BinarySearch(vector<int> vec, int key) {
    // key: 検索対象の値
    int left = 0, right = (int)vec.size(), mid;

    while (left < right) {
        mid = (left + right)/2;
        if (vec[mid] == key) {
            return mid;
        } else if (key < vec[mid]) {
            // 半分より下
            right = mid;
        } else if (vec[mid] < key) {
            // 半分より上
            // 必要ないが，分かりやすいように条件を記述してある．
            left = mid + 1;
        }
    }
    // key が配列の中に見つからない場合
    return -1;
}

int main(){

    int n, a, b;
    cin >> n >> a >> b;

    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> c[i];
    sort(c.begin(), c.end());

    // for(int i = 0; i < n; i++){
    //     if(a + b == c[i]) {
    //         cout << i + 1 << endl;
    //         return 0;
    //      }
    // }
    int res = BinarySearch(c, a + b) + 1;
    if(res==0) std::cout << res+2 << std::endl;
    else std::cout << res << std::endl;

    return 0;
}