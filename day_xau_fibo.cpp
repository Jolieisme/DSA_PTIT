#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll M = 1e9 + 7;
ll f[105];    // do dai xau
char fiboWord(ll n, ll k){
    if(n == 1)     return 'A';
    if(n == 2)     return 'B';
    if(k > f[n-2])  // do dai xau g(n - 2)
        return fiboWord(n - 1, k - f[n-2]);    // k = x + f[n-2]
    else    return fiboWord(n - 2, k);
}

int main(){
    int t;       cin >> t;
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 45; i++)    f[i] = f[i-1] + f[i-2];
    while(t--){
        ll n, k;        cin >> n >> k;
        cout << fiboWord(n, k) << '\n';
    }
}

