#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> edge[10005];
bitset<10005> visited;
int dis[10005] = {}, low[10005] = {}, par[10005] = {};
int canhCau = 0, cnt = 1;
set <int> dinhTru;

void DFS(int u){
    int child = 0;
    visited[u] = 1;
    dis[u] = low[u] = cnt++;
    for(int i : edge[u]){
        if(!visited[i]){
            child++;
            par[i] = u;
            DFS(i);
            low[u] = min(low[u], low[i]);
            if(low[i] > dis[u])    canhCau++;
            if(low[i] >= dis[u] && par[u])     dinhTru.insert(u);
        }
        else if(i != par[u]){
            low[u] = min(low[u], dis[i]);
        }
    }
    if(child > 1 and !par[u])    dinhTru.insert(u);
}

int main(){
    int v, e, x, y;
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }

    for(int i = 1; i <= v; ++i){
        if(!visited[i])    DFS(i);
    }

    cout << dinhTru.size() << ' ' << canhCau;
}