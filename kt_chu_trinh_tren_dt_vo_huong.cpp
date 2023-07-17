#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool visited[1005];
vector <int> edge[1005];
int parent[1005];
int v, e;

bool DFS(int u){
    visited[u] = 1;
    for(int i : edge[u]){
        if(!visited[i]){
            parent[i] = u;
            DFS(i);
        }
        else if(i != parent[u])      return 1;
    }
    return 0;
}

int main(){
    int t;     cin >> t;
    while(t--){
        int mark = 0;
        cin >> v >> e;
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        for(int i = 1; i<=v; i++)     edge[i].clear();
        while(e--){
            int x,y;      cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        for(int i = 1; i<=v; i++){
            if(!visited[i]){
                if(DFS(i)){
                    cout << "YES";
                    mark = 1;
                    break;
                }
            }
        }
        if(!mark)    cout << "NO";
        cout << "\n";
    }
}