#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <vector<int>> edge(1005);
bitset <1005> visited;
vector <int> v;
void DFS(int u){
    if(visited[u])    return;
    visited[u] = 1;
    for(int i = 0; i<edge[u].size(); i++){
        if(!visited[edge[u][i]]){
            DFS(edge[u][i]);
        }
    }
}

int main(){
    int t;    cin >> t;
    while(t--){
        int n,m;      cin >> n >> m;
        int x, y,a,b;
        for(int i = 1; i<=n; i++){
            edge[i].clear();
            visited[i] = 0;
        }

        while(m--){
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }

        int q;     cin >> q;
        while(q--){
            cin >> a >> b;
            for(int i = 1; i <= n; ++i){
                visited[i] = 0;
            }
            DFS(a);
            if(visited[b])    cout << "YES" << '\n';
            else     cout << "NO" <<'\n';
        }
    }
}