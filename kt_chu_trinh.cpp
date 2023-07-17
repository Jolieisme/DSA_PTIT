#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
int visited[1005];
int parent[1005], start, end;
bool BFS(int u) {
	queue <int> q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i : edge[x]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
                parent[i] = x;
            }
            else if(i != parent[x]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int t;      cin >> t;
    while(t--){
        int v, e, mark = 0;     cin >> v >> e;
        for(int i = 1; i<=v; i++)    edge[i].clear();
        while(e--){
            int x, y;   cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        for(int i = 1; i<=v; i++){
            if(!visited[i]){
                if(BFS(i)){
                    cout <<"YES" << '\n';
                    mark = 1;
                    break;
                }
            }
        }
        if(!mark)     cout << "NO" << "\n";
    }
}