#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;       cin >> t;
   while(t--){
        int n1,n2,n3;       cin >> n1 >> n2 >> n3;
        ll a[n1+5], b[n2+5], c[n3+5];
        for(int i = 0; i<n1; i++)    cin >> a[i];
        for(int i = 0; i<n2; i++)    cin >> b[i];
        for(int i = 0; i<n3; i++)    cin >> c[i];
        multiset <ll> res;
        int idxA= 0, idxB = 0, idxC = 0;
        while(idxA < n1 && idxB < n2 && idxC < n3){
            if(a[idxA] == b[idxB] && b[idxB] == c[idxC]){
                res.insert(a[idxA]);
                idxA++;
                idxB++;
                idxC++;
            }

            else if(a[idxA] < b[idxB])    idxA++;
            else if(b[idxB] < c[idxC])    idxB++;
            else     idxC++;
        }

        if(res.empty())    cout << -1;
        else    for(ll i : res)     cout << i << " ";
        cout << '\n';
    }
}