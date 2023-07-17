#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll M = 1e9 + 7;
ll powMod(ll m, ll x){
    if(x == 0)            return 1;
    ll x1 = powMod(m, x/2);
    if (x % 2 == 0)       return x1*x1 % M;
    return    m * (x1*x1 % M) % M;
}

ll reverse(ll x){
    ll tmp = 0;
    while(x){
        int a = x % 10;
        tmp = tmp * 10 + a;
        x /= 10;
    }
    return tmp;
}

int main(){
    int t;     cin >> t;
    while(t--){
        ll n;       cin >> n;
        ll b = reverse(n);
        cout << powMod(n, b) << "\n";
    }
}