#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
int visited[1005];
int last[1005];
void BFS(int u){
    queue <int> q;
    q.push(u);
    visited[u] = 1;
    while(q.size()){
        int tmp = q.front();
        q.pop();
        for(int i : edge[tmp]){
            if(!visited[i]){
                last[i] = tmp;
                q.push(i);
                visited[i] = 1;
            }
        }
    } 
}

int main(){
    int t;      cin >> t;
    while(t--){
        int v, e, x, y;     cin >> v >> e >> x >> y;
        memset(edge, 0, sizeof(edge));
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i<=v; i++)     edge[i].clear();
        while(e--){
            int a,b;     cin >> a >> b;
            edge[a].push_back(b);
        }
        BFS(x);
        if(!visited[y])    cout << -1;
        else{
            vector <int> path;     // luu duong di
            while(y != x){
                path.push_back(y);
                y = last[y];
            }
            path.push_back(x);
            for(int i = path.size() - 1; i>=0; i--)    cout << path[i] << " ";
        }
        cout << '\n';
    }
}