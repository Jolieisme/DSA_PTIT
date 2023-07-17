#include <bits/stdc++.h>
using namespace std;
int dynamic_pr(int a[], int n){
    int i, j, f[1005], res = 0;
    for(int i = 0; i<n; i++){
        f[i] = a[i];
        for(int j = 0; j<i; j++){
            if(a[j] < a[i]){
                f[i] = max(f[i], f[j] + a[i]);
            }
        }
        res = max(res, f[i]);
    }
    return res;
}

int main(){
    int t;      cin >> t;
    while(t--){
        int n;      cin >> n;
        int a[n+5];
        for(int i = 0; i<n; i++)     cin >> a[i];
        cout << dynamic_pr(a, n) << "\n";
    }
}
