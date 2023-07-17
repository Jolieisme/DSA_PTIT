#include <bits/stdc++.h>
#define ll long longt
using namespace std;
int main(){
    int t;       cin >> t;
    while(t--){
        int n;      cin >> n;
        ll res = 0;
        int a[n+5], b[n+5];
        for(int i = 0; i<n; i++)      cin >> a[i]; 
        for(int i = 0; i<n; i++)      cin >> b[i];
        sort(a, a+n);
        sort(b, b+n, greater <int>());
        for(int i = 0; i<n; i++){
            res += a[i]*b[i];
        }
        cout << res << '\n';
    }
}