#include <bits/stdc++.h>
#define ll long long
using namespace std;
bitset <1005> visited;
vector <vector<int>> edge(1005);
void BFS(int u){
    queue <int> q;
    q.push(u);
    visited[u] = 1;
    while(q.size()){
        u = q.front();
        cout << u << " ";
        q.pop();
        for(auto i : edge[u]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main(){
    int t;      cin >> t;
    while(t--){
        int v,e,u;      cin >> v >> e >> u;
        int x,y;
        for(int i = 1; i<=v; i++){
            edge[i].clear();
            visited[i] = 0;
        }
        while(e--){
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        BFS(u);
        cout << '\n';
    }
}