#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        A[i]--;
    }

    vector<int> ans;
    int s;
    for(int i = 0; i < n; i++){
        vector<int> seen(n, 0);
        vector<int> tmp;
        seen[i] = 1;
        queue<int> q;
        q.push(i);
        bool cycle = false;
        while(!q.empty()){
            int next = A[q.front()];
            if(seen[next]) {
                cycle = true;
                s = next;
                break;
            }
            q.pop();
            q.push(next);
            seen[next] = true;
        }
        if(cycle){
            break;
        }
    }

    queue<int> q;
    q.push(s);
    vector<int> seen(n, 0);
    seen[s] = 1;
    ans.push_back(s);
    while(!q.empty()){
        int next = A[q.front()];
        if(seen[next]) {
            break;
        }
        ans.push_back(next);
        q.pop();
        q.push(next);
        seen[next] = true;
    }


    cout << ans.size() << endl;
    for(auto a:ans) cout << a+1 << " ";
    cout << endl;

    return 0;
}