#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;       cin >> t;
    while(t--){
        int v, e;      cin >> v >> e;
        int x,y;
        vector <set<int>> edge(v+1);
        while(e--){
            cin >> x >> y;
            edge[x].insert(y);
        }
        for(int i = 1; i<=v; i++){
            cout << i << ": ";
            for(auto j : edge[i])    cout << j << " ";
            cout << "\n";
        }
    }
}
