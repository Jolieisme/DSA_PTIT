#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        ll n;   cin >> n;
        ll x;
        queue <ll> q;
        q.push(1); 
        while(q.size()){
            x = q.front();
            q.pop();
            if(x % n == 0){
                cout << x;
                break;
            }
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
        cout << '\n';
    }
}