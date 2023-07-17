#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> List[105];
bool visited[105];
int m, n, check;
void Hamilton(int u, int cnt){
    if(cnt == n){
        check = 1;
        return;
    }  
    for(int i = 0; i<List[u].size(); i++){
        int v = List[u][i];
        if(!visited[v]){
            visited[v] = 1;
            Hamilton(v, cnt+1);
            visited[v] = 0;
        }
    }
}

int main(){
    int t;     cin >> t;
    while(t--){
        int cnt = 0;
        check = 0;
        cin >> n >> m;
        for(int i = 1; i<=m; i++)    List[i].clear();

        while(m--){
            int x, y;      cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }

        for(int i = 1; i<=n; i++){
            memset(visited, 0, sizeof(visited));
            Hamilton(i, cnt);
        }
        if(check)      cout << 1 << '\n';
        else   cout << 0 << "\n";
    }
}