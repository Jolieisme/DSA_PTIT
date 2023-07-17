#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        ll sum = 0;
        int n;      cin >> n;
        int a[n+5];
        for(int i = 0; i<n; i++)    cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i<n; i++){
            sum += a[i] * i;
            sum %= 1000000007;
        }
        cout << sum << '\n';    
    }
}