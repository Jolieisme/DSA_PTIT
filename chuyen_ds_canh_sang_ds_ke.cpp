#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <vector<int>> edge(1005);
int main(){
    int t;       cin >> t;
    while(t--){
        set <int> s;
        int v,e,x,y;       cin >> v >> e;
        while(e--){
            cin >> x >> y;
            s.insert(x);
            s.insert(y);
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        for(auto i : s){
            cout << i << ": ";
            for(auto j : edge[i])    cout << j << " "; 
            cout << "\n";
        }
        cout << '\n';
    }
}