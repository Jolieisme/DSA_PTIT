#include <bits/stdc++.h>
#define ll long long
using namespace std;
bitset <1005> visited;
vector <vector<int>>  edge(1005);
void DFS(int u){
    visited[u] = 1;
    cout << u << ' ';
    for(int i = 0; i<edge[u].size(); i++){
        if(!visited[edge[u][i]])
            DFS(edge[u][i]);
    }
}

int main(){
    int t;       cin >> t;
    while(t--){
        int n, m, k, x, y;      cin >> n >> m >> k;

        for(int i = 1; i<=n; i++){
            edge[i].clear();
            visited[i] = 0;
        }

        while(m--){
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x); 
        }
        DFS(k);
        cout << "\n";
    }
}