#include <bits/stdc++.h>
#define ll long long
using namespace std;    // c(n,k) = c(n-1, k-1) + c(n-1,k)
int m = 1e9 + 7;        // c(k) = c(k) + c(k-1)
int nCr(int n, int k){
    if(k > n - k)     k = n - k;
    int c[n+1];
    memset(c, 0, sizeof(c));
    c[0] = 1;
    for(int i = 1; i<=n; i++){
        for(int j = min(i, k); j>0; j--){
            c[j] = (c[j] + c[j-1]) % m;
        }
    }
    return c[k];
}

int main(){
    int t;      cin >> t;
    while(t--){
        int n, k;        cin >> n >> k;
        cout << nCr(n, k) << '\n';
    }
}