#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;       cin >> t;
    while(t--){
        int m,n,k, check = 0;      cin >> m >> n >> k;
        int a[m+5], b[n+5], c[k+5];
        for(int i = 0; i<m; i++)      cin >> a[i];
        for(int j = 0; j<n; j++)      cin >> b[j];
        for(int x = 0; x<k; x++)      cin >> c[x];
        int idx1 = 0, idx2 = 0, idx3 = 0;
        while(idx1 < m && idx2 <n && idx3 < k){
            if(a[idx1] == b[idx2] && b[idx2] == c[idx3]){
                check = 1;
                cout << a[idx1] << " ";
                idx1++;
                idx2++;
                idx3++;
            }
            else{
                if(a[idx1] < b[idx2])    idx1++;
                else if(b[idx2] < c[idx3])    idx2++;
                else    idx3++;
            }
        }
        if(!check)    cout << "NO";
        cout << '\n';
    }
}