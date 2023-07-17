#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> edge[100005];
int main(){
    int t;     cin >> t;
    while(t--){
        int v,e;     cin >> v >> e;
        while(e--){
            int x,y;     cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        } 
        int mark = 1;
        for(int i = 1; i<=v; i++){
            for(int j : edge[i]){
                if(edge[i].size() != edge[j].size()){
                    cout << "NO" << "\n";
                    mark = 0;
                    break;
                }
            }
            if(!mark)   break;
        }
        if(mark)     cout << "YES" << "\n";
    }
}