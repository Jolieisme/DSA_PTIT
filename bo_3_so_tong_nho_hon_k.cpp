#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;        cin >> t;
    while(t--){
        ll cnt = 0;
        int n,k;       cin >> n >> k;
        ll a[n+5], res = 0;
        for(int i = 0; i<n; i++)
            cin >> a[i];
        sort(a,a+n);
        for(int i = 0; i<n; i++){
            if(a[i] > k)    break;
            for(int j = i+1; j<n; j++){
                ll x = k - a[i] - a[j];
                res += lower_bound(a + j + 1, a+n, x) - (a+j+1);
            }
        }
        cout << res << '\n';
    }
}