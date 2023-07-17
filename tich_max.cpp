#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;       cin >> n;
    int a[n+5];
    for(int i = 0; i<n; i++)    cin >> a[i];
    sort(a, a+n);
    cout << max(a[n-1]*a[n-2]*a[n-3], a[0]*a[1]*a[n-1]);
}