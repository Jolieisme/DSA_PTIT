#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;       cin >> n;
    int a[n+5];
    multiset <int> s;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        s.insert(a[i]);
        cout << "Buoc " << i << ": ";
        for(auto x : s)     cout << x << " ";
        cout <<"\n";
    }
}