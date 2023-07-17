#include <bits/stdc++.h>
#define ll long long
using namespace std;
int color[1005], parent[1005];
vector <int> edge[1005];
int v, e;

bool DFS(int u){
    color[u] = 1;   // mau xam
    for(int i : edge[u]){
        if(color[i] == 0){    // mau trang - chua duyet
            parent[i] = u;
            if(DFS(i))    return 1;
        }
        else if(color[i] == 1)      return 1;   // phai la mau xam moi quay nguoc duoc
    }
    color[u] = 2;   // mau den - da duyet het cac dinh ke, k quay nguoc duoc
    return 0;
}

int main(){
    int t;     cin >> t;
    while(t--){
        int mark = 0;
        cin >> v >> e;
        memset(color, 0, sizeof(color));
        memset(parent, 0, sizeof(parent));
        for(int i = 1; i<=v; i++)     edge[i].clear();
        while(e--){
            int x,y;      cin >> x >> y;
            edge[x].push_back(y);
        }
        for(int i = 1; i<=v; i++){
            if(color[i] == 0){
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