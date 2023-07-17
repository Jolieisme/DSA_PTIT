#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000005];
int main(){
    int t;       cin >> t;
    while(t--){
        ll n;       cin >> n;
        ll idx = 0, MAX = -1;
        ll sum = 0;
        vector <int> v;
        for(ll i = 0; i<n; i++)   cin >> a[i];
        for(ll i = 0; i<n; i++){
            for(ll j = i; j<n; j++){
                MAX = max(a[j], MAX);
                v.push_back(MAX);
            }
            MAX = -1;
        }
        for(auto i : v)   sum += i;
        cout << sum << '\n';
    }
}