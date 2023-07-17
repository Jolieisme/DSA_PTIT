#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[1005];
bitset <1005> visited;

void DFS(int u) {
	visited[u] = 1;
	for(auto i : edge[u]) {
		if(!visited[i])     DFS(i);
	}
}

int main(){
    int t;      cin >> t;
    while(t--){
        int v, e, x, y, cnt = 0;      cin >> v >> e;
        for(int i = 1; i<=v; i++){
            edge[i].clear();
            visited[i] = 0;
        }

        while(e--){
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }

        for(int i = 1; i<=v; i++){
            if(!visited[i]){
                cnt++;
                DFS(i);
            }
        }
        cout << cnt << "\n";
    }
}