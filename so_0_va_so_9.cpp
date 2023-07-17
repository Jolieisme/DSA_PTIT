#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        int n;      cin >> n;
        queue <int> q;
        q.push(9);
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(x % n == 0){
                cout << x << "\n";
                break;
            }
            q.push(x*10);
            q.push(x*10 + 9);
        }
    }
}