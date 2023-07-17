#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll M = 1e9 + 7;
ll powMod(int m, int x){
    if(x == 0)       return 1;
    ll x1 = powMod(m, x/2);
    if (x % 2 == 0)    return x1*x1 % M;
    return    m * (x1*x1 % M) % M;
}

int main(){
    int t;     cin >> t;
    while(t--){
        int n, k;       cin >> n >> k;
        cout << powMod(n, k) << "\n";
    }
}