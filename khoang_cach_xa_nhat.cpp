#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;       cin >> t;
    while(t--){
        int n;     cin >> n;
        int a[n+5], MAX[n+5];
        for(int i = 0; i<n; i++)    cin >> a[i]; // 34 8 10 3 2 80 30 33 1
        MAX[n-1] = a[n-1]; // 1
        for(int i = n-2; i>=0; i--)   MAX[i] = max(MAX[i+1], a[i]);
        int res = -1, i,j;
        i = j = 0;
        while(i < n && j < n){
            if(MAX[j] > a[i]){
                res = max(res, j - i);
                j++;
            }
            else  i++;
        }
        if(!res)    res = -1;
        cout << res << "\n";
    }
}