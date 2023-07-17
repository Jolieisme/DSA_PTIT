#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
int visited[1005];
void DFS(int u){
    visited[u] = 1;
    for(int i : edge[u]){
        if(!visited[i]){
            DFS(i);
        }
    }
}

int main(){
    int t;     cin >> t;
    while(t--){
        int v, e, cnt1 = 0, cnt;    cin >> v >> e;
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i<=v; i++)    edge[i].clear();
        while(e--){
            int x, y;     cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }

        for(int i = 1; i<=v; i++){
            if(!visited[i]){
                cnt1++;
                DFS(i);
            }
        }

        int tmp = 0,  res = -1; 
        for(int i = 1; i<=v; i++){
            memset(visited, 0, sizeof(visited));
            visited[i] = 1;
            cnt = 0;
            for(int j = 1; j<=v; j++){
                if(!visited[j]){
                    cnt++;
                    DFS(j);
                }
            }

            if(cnt > cnt1 && cnt > tmp){
                tmp = cnt;
                res = i;
            }
        }

        if(res == -1)    cout << 0;
        else  cout << res;
    }
}