#include <bits/stdc++.h>     //02010
#define ll long long
using namespace std;
int a[105],s = 0, n, ok = 0, x, c[105];

void print(int m){
    cout << "[";
    for(int i = 1; i <= m-1; i++)    cout << c[i] << " ";
    cout << c[m] << "]";
}

void Try(int i, int s){
    int j;
    for(int j = 1; j<=n; j++){
        if(a[j] >= c[i-1] && s+a[j] <= x){
            c[i] = a[j];
            s += a[j];
            if(s == x){
                ok = 1;
                print(i);
            }
            else  Try(i + 1, s);
            s -= a[j];
        }
    }
}

int main(){
    int t;       cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i = 1; i <= n; i++)      cin >> a[i];
        Try(1, s);
        if(ok == 0)     cout << -1;
        cout << "\n";
    }
}