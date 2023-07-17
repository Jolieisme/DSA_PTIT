#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
bitset <1005> visited;
void BFS(int u){
    queue <int> q;
    q.push(u);
    visited[u] = 1;
    int tmp;
    while(q.size()){
        tmp = q.front();
        q.pop();
        for(int i : edge[tmp]){
            if(!visited[i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int check(int v){
    for(int i = 1; i<=v; i++){
        if(!visited[i])    return 0;
    }
    return 1;
}

int main(){
    int t;      cin >> t;
    while(t--){
        int v, e, x, y, cnt = 0;      cin >> v >> e;
        for(int i = 1; i<=v; i++){
            edge[i].clear();
            visited[i] = 0;
        }

        while(e--){
            cin >> x >> y;
            edge[x].push_back(y);
        }
        BFS(1);
        if(check(v))    cout << "YES" << '\n';
        else    cout << "NO" << '\n';
    }
}