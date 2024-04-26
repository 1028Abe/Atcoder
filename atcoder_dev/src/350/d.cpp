#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<unordered_set<int>> friends(N);
    
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        --a; --b;  // converting to zero-based index
        friends[a].insert(b);
        friends[b].insert(a);
    }

    int operations = 0;
    for (int x = 0; x < N; ++x) {
        for (int y : friends[x]) {
            if (y > x) {  // avoid double counting
                for (int z : friends[y]) {
                    if (z > y && !friends[x].count(z)) {
                        // Y is a common friend of X and Z, but X and Z are not friends
                        operations++;
                    }
                }
            }
        }
    }

    cout << operations << endl;

    return 0;
}