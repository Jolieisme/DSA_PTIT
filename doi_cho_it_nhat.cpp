#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        int n, cnt = 0;
        cin >> n;
        int a[n+5];
        for(int i = 0; i<n; i++)      cin >> a[i];
        for(int i = 0; i<n; i++){
            int idx = i;
            for(int j = i + 1; j<n; j++){
                if(a[idx] > a[j]){
                    idx = j;
                }
            }
            swap(a[idx], a[i]);
            if(idx != i)   cnt++;
        }
        cout << cnt << '\n';
    }
}
