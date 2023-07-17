#include <bits/stdc++.h>
#define ll long long
using namespace std;
int f[1005][1005];
int dynamic_pr(string a, string b, int n, int m){
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=m; j++){
            if(i == 0 || j == 0)         f[i][j] = 0;
            else if(a[i-1] == b[j-1])    f[i][j] = f[i-1][j-1] + 1;
            else     f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
    }
    return f[n][m];
}

int main(){
    int t;      cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        cout << dynamic_pr(a, b, n, m) << '\n';
    }
}