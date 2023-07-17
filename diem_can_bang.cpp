#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;        cin >> t;
    while(t--){
        int n, sum;        cin >> n;
        int a[n+5], f[n+5];
        cin >> a[1];
        f[1] = a[1];
        sum = a[1];

        for(int i = 2; i<=n; i++){
            cin >> a[i];
            sum += a[i];
            f[i] = f[i-1] + a[i];
        }

        bool check = 0;
        for(int i = 2; i<=n; i++){
            if(f[i] - a[i] == sum - f[i]){
                cout << i << "\n";
                check = 1;
                break;
            }
        }
        if(!check)    cout << -1 << '\n';
    }
}