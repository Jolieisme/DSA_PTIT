#include <bits/stdc++.h>
#define ll long long
using namespace std;
int d[1005][1005];
int main(){
    int v,e;     cin >> v >> e;
    for(int i = 1; i<=v; i++){
        for(int j = 1; j<=v; j++){
            if(i == j)    d[i][j] = 0;
            else     d[i][j] = 1e9;
        }
    }
    
    while(e--){
        int x,y,w;      cin >> x >> y >> w;
        d[x][y] = d[y][x] = w;
    }
    
    for(int k = 1; k<=v; k++){
        for(int i = 1; i<=v; i++){
            for(int j = 1; j<=v; j++){
                if(d[i][j] > d[i][k] + d[k][j]){
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
    int q;     cin >> q;
    while(q--){
        int a,b;     cin >> a >> b;
        cout << d[a][b] << "\n";
    }
}