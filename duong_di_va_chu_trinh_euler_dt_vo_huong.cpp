#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;     cin >> t;
    while(t--){
        int v, e, cnt = 0;     cin >> v >> e;
        int deg[1005] = {};
        while(e--){
            int x,y;      cin >> x >> y;
            deg[x]++;
            deg[y]++;
        }

        for(int i = 1; i<=v; i++){
            if(deg[i]%2 != 0)    cnt++;
        }

        if(!cnt)     cout << 2 << "\n";
        else if(cnt == 2)     cout << 1 << '\n';
        else     cout << 0 << '\n';
    }
}