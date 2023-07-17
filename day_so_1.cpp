#include <bits/stdc++.h>
using namespace std;
int a[10005],n;

void BackTracking(int a[], int n){
    if(n>0){
        cout << "[";
        for(int i = 1; i<n; i++)   cout << a[i] << " ";
        cout << a[n] << "]";
        cout << "\n";
        for(int i = 1; i<n; i++)
            a[i] = a[i] + a[i+1];
        BackTracking(a, n-1);
    }
}

int main(){
    int t;       cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i<=n; i++)    cin >> a[i];
        BackTracking(a,n);
        cout << '\n';
    }
}