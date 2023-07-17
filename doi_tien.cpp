#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
    int t;     cin >> t;
    while(t--){
        int cnt = 0;
        int n;      cin >> n;
        int i = 9;
        while(n){
           cnt += n/a[i];
           n = n % a[i];
           i--;
        }
        cout << cnt << '\n';
    }
}