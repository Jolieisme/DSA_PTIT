#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
bool visited[1005];
int n;
void DFS(int u){
    visited[u] = 1;
    for(int i = 0; i < edge[u].size(); i++){
        if(!visited[edge[u][i]]){
            DFS(edge[u][i]);
        }
    }
}

int main(){
    int t;     cin >> t;
    while(t--){
        int mark = 1;
        cin >> n;
        int m  = n-1;
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++)    edge[i].clear();
        while(m--){
           int x,y;    cin >> x >> y;
           edge[x].push_back(y);
           edge[y].push_back(x);
        }

        DFS(1);
        for(int i = 1; i<=n;i++){
            if(!visited[i]){
                cout << "NO";
                mark = 0;
                break;
            }
        }
        if(mark)    cout << "YES";
        cout << '\n';
    }
}