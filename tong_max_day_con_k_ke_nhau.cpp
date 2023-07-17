#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000005], f[1000005];
int main(){
    int t;       cin >> t;
    while(t--){
        int n;        cin >> n;
        for(int i = 1; i<=n; i++)     cin >> a[i];
        memset(f, 0, sizeof(f));
        f[1] = a[1];
        f[2] = max(a[1], a[2]);
        for(int i = 3; i<=n; i++){
            f[i] = max(f[i-2] + a[i], f[i-1]);
        }
        cout << f[n] << '\n';
    }
}