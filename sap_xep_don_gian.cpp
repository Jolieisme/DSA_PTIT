#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;      cin >> n;
    int res = 0;
    vector <int> v(n+5), f(n+5, 0);
    for(int i= 1; i<=n; i++)    cin >> v[i];
    for(int i = 1; i<=n; i++){
        f[v[i]] = f[v[i] - 1] + 1;
        res = max(f[v[i]], res);
    }

    cout << n - res << '\n';
}