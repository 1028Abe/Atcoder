#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    for(int i = 0; i < M; i++){
        cin >> A[i];
    }
    vector<int> score(N, 0);
    vector<vector<int>> each_score(N);

    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        for(int j = 0; j < M; j++){
            if(s[j]=='o') score[i] += A[j];
            else each_score[i].push_back(A[j]);
        }
        sort(each_score[i].begin(), each_score[i].end());
        score[i] += i + 1;
    }
    int max_score = -1;
    for(int i = 0; i < N; i++){
        max_score = max(max_score, score[i]);
        cout << score[i] << endl;
    }

    cout << "max : " << max_score << endl;

    for(int i = 0; i < N; i++){
        while(score[i] <= max_score){
            score[i]
        }
    }

    return 0;
}