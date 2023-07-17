#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <vector<int>> edge(1005);
bitset <1005> visited;
void DFS(int u){
    cout << u << " ";
    visited[u] = 1;
    for(int i = 0; i<edge[u].size(); i++){
        if(!visited[edge[u][i]]){
            visited[edge[u][i]] = 1;
            DFS(edge[u][i]);
        }
    }
}

int main(){
    int t;     cin >> t;
    while(t--){
        int v,e,u,x,y;      cin >> v >> e >> u;
        for(int i = 1; i<=v; i++){
            edge[i].clear();
            visited[i] = 0;
        }
        while(e--){
            cin >> x >> y;
            edge[x].push_back(y);
        }
        DFS(u);
        cout << "\n";
    }
}