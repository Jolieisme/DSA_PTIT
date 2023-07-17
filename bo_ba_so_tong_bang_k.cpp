#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;       cin >> t;
    while(t--){
        int n, k, l, r, mark = 0;       cin >> n >> k;
        int a[n+5];
        for(int i = 0; i<n; i++)    cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i<n; i++){
            l = i+1;
            r = n - 1;
            while(l < r){
                if(a[i] + a[l] + a[r] == k){
                    mark = 1;
                    break;
                }
                if(a[i] + a[l] + a[r] < k)    l++;
                else   r--;
            }
        }
        if(mark)      cout << "YES";
        else          cout << "NO";
        cout << '\n';
    }
}