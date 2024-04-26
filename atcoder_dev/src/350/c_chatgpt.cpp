
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        A[i] -= 1; // 0-based indexに変更
    }

    vector<pair<int, int>> operations; // 操作を記録するベクター

    // 各要素を正しい位置に移動
    for (int i = 0; i < N; ++i) {
        while (A[i] != i) {
            int target = A[i];
            // A[i] と A[target] を交換
            swap(A[i], A[target]);
            operations.push_back(make_pair(i, target)); // 1-based indexにするために+1する
        }
    }

    // 操作回数を出力
    cout << operations.size() << endl;
    for (auto& op : operations) {
        // 0-based indexを1-based indexに変換して出力
        cout << op.first + 1 << " " << op.second + 1 << endl;
    }

    return 0;
}