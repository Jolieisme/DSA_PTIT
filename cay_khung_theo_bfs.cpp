#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
bool visited[1005];
int parent[1005];
vector <int> res;

void BFS(int u){
    queue <int> q;
    q.push(u);
    visited[u] = 1;
    while(q.size()){
        int x = q.front();
        q.pop();
        res.push_back(x);
        for(int i : edge[x]){
            if(!visited[i]){
                visited[i] = 1;
                parent[i] = x;
                q.push(i);
            }
        }
    }
}
int main(){
    int t;     cin >> t;
    while(t--){
        int v,e, a;     cin >> v >> e >> a;
        res.clear();
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        for(int i = 1; i<=v; i++)     edge[i].clear();
        while(e--){
            int x, y;      cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x); 
        }

        BFS(a);
        if(res.size() < v)    cout << -1 << "\n";
        else{
            for(int i = 1; i<res.size(); i++){
                cout << parent[res[i]] << " " << res[i] << "\n";
            }
        }
        // 1: 2 3 
        // 2: 1 4
        // 3: 1 4
        // 4: 2 3
        // 1(0) 2(1) 4(2) 3(4)
        // 1(0) 3(1)  
    }
}