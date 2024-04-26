#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool is_airport_code(const string& S, const string& T) {
    int n = S.size();
    vector<int> pos[26]; // アルファベットの各文字について、S中の位置を記録する

    // S の各文字について位置を記録
    for (int i = 0; i < n; ++i) {
        pos[tolower(S[i]) - 'a'].push_back(i);
    }

    // 長さ3の部分列でTを形成できるかチェック
    for (auto i : pos[toupper(T[0]) - 'A']) {
        for (auto j : pos[toupper(T[1]) - 'A']) {
            if (i >= j) continue;
            for (auto k : pos[toupper(T[2]) - 'A']) {
                if (j >= k) continue;
                return true; // 有効な位置が見つかったら即trueを返す
            }
        }
    }

    // 長さ2の部分列でTを形成できるかチェック（最後に'X'を追加）
    if (T[2] == 'X') {
        for (auto i : pos[toupper(T[0]) - 'A']) {
            for (auto j : pos[toupper(T[1]) - 'A']) {
                if (i < j) return true; // 有効な位置が見つかったら即trueを返す
            }
        }
    }

    return false; // どのパターンでも合致しなかった場合はfalse
}

int main() {
    string S, T;
    cin >> S >> T;

    if (is_airport_code(S, T)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}