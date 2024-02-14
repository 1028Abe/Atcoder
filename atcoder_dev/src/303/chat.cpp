#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> a(M, std::vector<int>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> a[i][j];
        }
    }

    int count = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            bool conflict = false;
            for (int k = 0; k < M && !conflict; ++k) {
                bool found_i = false, found_j = false;
                for (int l = 0; l < N && (!found_i || !found_j); ++l) {
                    if (a[k][l] == i)
                        found_i = true;
                    else if (a[k][l] == j)
                        found_j = true;
                }
                if (found_i && found_j) {
                    conflict = true;
                }
            }
            if (!conflict)
                count++;
        }
    }

    std::cout << count << std::endl;

        return 0;
}