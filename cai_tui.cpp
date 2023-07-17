#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, v;         cin >> n >> v;
    int a[n+5], value[n+5];
    int res[n+5][v+5];
    for(int i = 1; i<=n; i++)     cin >> a[i] >> value[i];
    memset(res, 0, sizeof(res));
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=v; j++){
            // neu khong chon vat i
            res[i][j] = res[i-1][j];
            // neu chon vat i
            if(j >= a[i]){
                res[i][j] = max(res[i][j], res[i-1][j - a[i]] + value[i]);
            }
        }
    }
    cout << res[n][v] << "\n";
}