#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll q[55];
    q[1] = 1;
    q[2] = 2;
    q[3] = 4;
    for(int i = 4; i<=50; i++)     q[i] = q[i-1] + q[i-2] + q[i-3];
    int t;      cin >> t;
    while(t--){
        ll n;      cin >> n;
        cout << q[n] << "\n";
    }
}