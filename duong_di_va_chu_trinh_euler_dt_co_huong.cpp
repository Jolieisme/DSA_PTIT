#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;     cin >> t;
    while(t--){
        int v,e;     cin >> v >> e;
        int deg_out[1005] = {};
        int deg_in[1005] = {};
        while(e--){
            int x, y;      cin >>x >> y;
            deg_out[x]++;
            deg_in[y]++;
        }
        int check = 1;
        for(int i = 1; i<=v; i++){
            if(deg_out[i] != deg_in[i]){
                check = 0;
                break;
            }
        }
        
        cout << check << "\n";
    }
}