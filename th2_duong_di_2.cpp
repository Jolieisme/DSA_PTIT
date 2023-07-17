#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
bool visited[1005];
int parent[1005];
void BFS(int u){
    queue <int> q;
    q.push(u);
    visited[u] = 1;
    while(q.size()){
        int a = q.front();
        q.pop();
        for(int i : edge[a]){
            if(!visited[i]){
                visited[i] = 1;
                q.push(i);
                parent[i] = a;
            }
        }
    }
}

int main(){
    int t;      cin >> t;
    while(t--){
        int v,e, x, tmp;   cin >> v >> e >> x;
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        for(int i = 1; i<=v; i++){
            edge[i].clear();
        }

        while(e--){
            int x,y;     cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        
        for(int i = 1; i<=v; i++){
            memset(visited, 0, sizeof(visited));
            memset(parent, 0, sizeof(parent));
            if(i == x)    continue;
            BFS(x);
            tmp = i;
            if(!visited[tmp])     cout << "No path" << '\n';
            else{
                vector <int> path;
                while(tmp != x){
                    path.push_back(tmp);
                    tmp = parent[tmp];
                }
                path.push_back(x);
                for(int i = path.size() - 1; i>=0; i--){
                    cout << path[i] << " ";
                }
                cout << "\n";
            }
        }
    }
}