#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <vector<int>> edge(1005);
bitset <1005> visited;
void BFS(int u){
    queue <int> q;
    q.push(u);
    visited[u] = 1;
    while(q.size()){
        u = q.front();
        cout << u << " ";
        q.pop();
        for(int i = 0; i<edge[u].size(); i++){
            if(!visited[edge[u][i]]){
                visited[edge[u][i]] = 1;
                q.push(edge[u][i]);
            }
        }
    }
}

int main(){
    int t;      cin >> t;
    while(t--){
        int v,e,u;     cin >> v >> e >> u;
        int x,y;
        for(int i = 1; i<=v; i++){
            edge[i].clear();
            visited[i] = 0;
        }
        while(e--){
            cin >> x >> y;
            edge[x].push_back(y);
        }
        BFS(u);
        cout << "\n";
    }
}