#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;       cin >> t;
    while(t--){
        int n,k;      cin >> n >> k;
        int a[n+5];
        ll res = 0;
        for(int i = 0; i<n; i++)   cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i<n-1; i++){
            auto x1 = lower_bound(a + i + 1, a+n, k - a[i]);
            auto x2 = upper_bound(a + i + 1, a+n, k - a[i]);
            res += x2 - x1;
        }
        cout << res << '\n';
    }
}