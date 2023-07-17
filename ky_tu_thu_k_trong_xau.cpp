#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll Try(ll n, ll k){
    ll x = pow(2, n-1);
    if(x == k)      return n;
    else if(k<x)    return Try(n-1, k);
    else            return Try(n-1, k-x); 
}

int main(){
    int t;       cin >> t;
    while(t--){
        ll n,k;        cin >> n >> k;
        cout << char(Try(n, k) + 64) << '\n';
    }
}