#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, f[2][2], d[2][2];
ll mod = 1e9 + 7;

void Mul(ll a[2][2], ll b[2][2]){
    ll x = (a[0][0] * b[0][0] % mod + a[0][1] * b[1][0] % mod) % mod;
    ll y = (a[0][0] * b[0][1] % mod + a[0][1] * b[1][1] % mod) % mod;
    ll z = (a[1][0] * b[0][0] % mod + a[1][1] * b[1][0] % mod) % mod;
    ll t = (a[1][0] * b[0][1] % mod + a[1][1] * b[1][1] % mod) % mod;
    f[0][0] = x;
    f[0][1] = y;
    f[1][0] = z;
    f[1][1] = t;
}

void PowMod(ll f[2][2], int k){
    if(k <= 1)    return;
    PowMod(f,k/2);
    Mul(f,f);
    if(k % 2 == 1)     Mul(f, d);
}

int main(){
    int t;     cin >> t;
    while(t--){
        f[0][0] = f[0][1] = f[1][0] = 1;
        f[1][1] = 0;
        d[0][0] = d[0][1] = d[1][0] = 1;
        d[1][1] = 0;
        cin >> n;
        PowMod(f, n-1);
        cout << f[0][0] << '\n';
    }
}