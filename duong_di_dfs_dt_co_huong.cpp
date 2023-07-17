#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
int visited[1005] = {};
int last[1005] = {};

void DFS(int u){
    visited[u] = 1;
    for(int i : edge[u]){
        if(!visited[i]){
            DFS(i);
            last[i] = u;
        }
    }
}

int main(){
    int t;       cin >> t;
    while(t--){
        int v,e,x,y;      cin >> v >> e >>x >> y;
        memset(visited, 0, sizeof(visited));
        memset(last, 0, sizeof(last));
        for(int i = 1; i<=v; i++)     edge[i].clear();
        while(e--){
            int a,b;   cin >> a >> b;
            edge[a].push_back(b);
        }
        for(int i = 1; i<=v; i++)    sort(edge[i].begin(), edge[i].end());
        DFS(x);
        if(!visited[y])     cout << -1;
        else{
            vector <int> path;    //luu duong di
            while(y != x){
                path.push_back(y);
                y = last[y];
            }
            path.push_back(x);
            for(int i = path.size()-1; i>=0; i--)     cout << path[i] << " ";
        }
        cout << "\n";
    }
}