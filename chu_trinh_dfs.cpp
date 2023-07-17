#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
bool visited[1005];
int parent[1005];
void DFS(int u){
    visited[u] = 1;
    for(int i : edge[u]){
        if(!visited[i]){
            parent[i] = u;
            DFS(i);
        }
    }
}

int main(){
    int t;    cin >> t;
    while(t--){
        int v, e;     cin >> v >> e;
        memset(visited, 0, sizeof(visited));
        memset(parent, 0 ,sizeof(parent));
        for(int i = 1; i<=v; i++)     edge[i].clear();
        while(e--){
            int x,y;     cin >> x >>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        DFS(1);
    
    }
}