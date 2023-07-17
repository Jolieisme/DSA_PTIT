#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;     cin >> t;
    while(t--){
        int n, x, mark = 0;      cin >> n >> x;
        int a[n+5];
        for(int i = 1; i<=n; i++)     cin >> a[i];
        int l = 0, r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == x){
                mark = 1;
                cout << mid << '\n';
                break;
            }
            else if(x <a[mid])   r = mid - 1;
            else  l = mid + 1;
        }
        if(mark == 0)    cout << "NO" << '\n';
    }
}