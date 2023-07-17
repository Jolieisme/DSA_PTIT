#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
bitset <1005> visited;
vector <int> res;
void dfs(int u){
    res.push_back(u);
    for(int i = 0; i<edge[u].size(); i++){
        if(!visited[edge[u][i]]){
            dfs(edge[u][i]);
            visited[edge[u][i]] = 1;
        }
    }
}

int main(){
    int t;    cin >> t;
    while(t--){
        int d, c, u, v, x, y;      cin >> d >> c >> u >> v;
        while(c--){
            cin >> x >> y;
            edge[x].push_back(y);
        }
        
    }
}