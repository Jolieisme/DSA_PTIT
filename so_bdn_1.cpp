#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;       cin >> t;
    while(t--){
        ll n;      cin >> n;
        ll tmp = 1;
        vector <ll> v;
        v.push_back(tmp);
        while(tmp <= n){
            tmp *= 10;
            int s = v.size();
            v.push_back(tmp);
            for(int i = 0; i<s; i++)    v.push_back(tmp + v[i]);
        }
        cout << upper_bound(v.begin(), v.end(), n) - v.begin() <<'\n';
    }
}