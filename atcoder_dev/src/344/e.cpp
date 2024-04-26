#include <bits/stdc++.h>

using namespace std;

struct Node{
    int pre, nxt;
    Node(int pre=-1, int nxt=-1) : pre(pre), nxt(nxt){}
};

const int INF = 1001001001;

struct List{
    unordered_map<int, Node> nodes;
    int head, tail;
    List() : head(-INF), tail(INF) {
        nodes[head] = Node(-1, tail);
        nodes[tail] = Node(head, -1);
    }

    void erase(int x){
        Node a = nodes[x];
        nodes[a.nxt].pre = a.pre;
        nodes[a.pre].nxt = a.nxt;
        nodes.erase(x);
    }

    void add(int x, int y){
        int z = nodes[x].nxt;
        nodes[x].nxt = y;
        nodes[z].pre = y;
        nodes[y] = Node(x, z);
    }

    void print(){
        int now = nodes[head].nxt;
        while(now!=tail){
            cout << now << " ";
            now = nodes[now].nxt;
        }cout << endl;
    }
};

int main(){

    int n;
    cin >> n;

    List A;
    int now = A.head;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        A.add(now, a);
        now = a;
    }

    int q; 
    cin >> q;
    for(int i = 0; i < q; i++){
        int z;
        cin >> z;

        if(z==1){
            int x, y;
            cin >> x >> y;
            A.add(x, y);
        }
        else if(z==2){
            int x;
            cin >> x;
            A.erase(x);
        }
    }

    A.print();

    return 0;
}