#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int Mod = 1e9 + 7;
ll fibo(int n){
    if(n == 1 || n == 2)   return 1;
    ll first = 1, second = 1;
    for(ll i = 3; i<=n; i++){
        second = first + second;
        first = second - first;
    }
    return second % Mod;
}

int main(){
    int t;      cin >> t;
    while(t--){
        ll n;      cin >> n;
        cout << fibo(n) << "\n";
    }
}