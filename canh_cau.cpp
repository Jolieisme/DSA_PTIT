#include <bits/stdc++.h>
#define ll long long
using namespace std;
int v, e;
bool visited[1005];
vector <pair<int, int>> list_edge;   // luu canh
vector <int> edge[1005];

void DFS(int u, int start, int end){
    visited[u] = 1;
    for(int i : edge[u]){
        if(i == start && u == end || i == end && u == start)   
            continue;   // loai bo canh start end
        if(!visited[i])    DFS(i, start, end);
    }
}

void canh_cau(){
    int tplt = 1;    // da lien thong
    for(auto i : list_edge){
        int a = i.first, b = i.second;   
        memset(visited, 0, sizeof(visited));
        int cnt = 0;     // dem so tplt sau khi bo canh i
        for(int j = 1; j<=v; j++){
            if(!visited[j]){
                cnt++;
                DFS(j, a, b);
            }
        }
        if(cnt > tplt)    cout << a << " " << b << " ";
    }
}

int main(){
    int t;     cin >> t;
    while(t--){
        cin >> v >> e;
        memset(visited, 0, sizeof(visited));
        list_edge.clear();
        while(e--){
            int x, y;     cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
            list_edge.push_back({x, y});
        }
        sort(list_edge.begin(), list_edge.end());
        canh_cau();
        cout << '\n';
    }
}