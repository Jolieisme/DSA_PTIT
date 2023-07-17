#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k;
ll mod = 1e9 + 7;
ll f[15][15], a[15][15], b[15][15];
void Multy(ll a[15][15], ll b[15][15]){
    ll c[15][15] = {0};
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            for(int k = 1; k<=n; k++){
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= mod;
            }
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            a[i][j] = c[i][j];
        }
    }
}

void PowMod(ll a[15][15], ll k){
    if(k == 1)    return;
    PowMod(a, k/2);
    Multy(a, a);
    if(k % 2 == 1)   Multy(a, f);
}

int main(){
    int t;     cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                cin >> a[i][j];
                f[i][j] = a[i][j];
            }
        }
        PowMod(a, k);
        ll res = 0;
        for(int i = 1; i<=n ; i++){
            res += a[i][n];
        }
        res = res % mod;
        cout << res<< "\n";
    }
}