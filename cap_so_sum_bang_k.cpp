#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;       cin >> t;
    while(t--){ 
        int n, k;        cin >> n >> k;
        ll cnt = 0; 
        int a[n+5];
        for(int i = 0; i<n; i++)     cin >> a[i];
        sort(a, a+n);
        int l = 0, r = n - 1;
        while(l < r){
            if(a[l] + a[r] == k){
                cnt++;
                r--;
            }
            else if(a[l] + a[r] > k)   r--;
            else   l++;
        }
        cout << cnt << '\n';
    }
}