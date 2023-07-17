#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
bool visited[1005];
int parent[1005];
void DFS(int u){
    visited[u] = 1;
    for(auto i : edge[u]){
        if(!visited[i]){
            parent[i] = u; 
            DFS(i);
        }
    }
}

int main(){
    int t;     cin >> t;
    while(t--){
        int v, e;      cin >> v >> e;
        while(e--){
            int x,y;       cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        
        1: 2 3
        2: 1 3 5
        3: 1 2 4 5
        4: 3 5 6
        5: 2 3 4 6
        6: 4 5
    }
}