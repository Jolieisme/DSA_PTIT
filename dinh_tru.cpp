#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool visited[1005];
vector <int> edge[1005];
int v, e;
void DFS(int u){
    visited[u] = 1;
    for(int i : edge[u]){
        if(!visited[i]){
            DFS(i);
        }
    }
}

void dinh_tru(){
    int tplt = 1;   //da lien thong
    for(int i = 1; i<= v; i++){
        memset(visited, 0, sizeof(visited));  // xet dinh khac thi phai memset lai
        visited[i] = 1;   // bo dinh i
        int cnt = 0;   // dem so tp lien thong sau khi bo dinh i
        for(int j = 1; j<=v; j++){
            if(!visited[j]){
                cnt++;
                DFS(j);
            }
        }
        if(cnt > tplt)   cout << i << " ";
    }
}

int main(){
    int t;    cin >> t;
    while(t--){
        cin >> v >> e;
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i<=v; i++)   edge[i].clear();
        while(e--){
            int x,y;     cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        dinh_tru();
        cout << '\n';
    }     
}