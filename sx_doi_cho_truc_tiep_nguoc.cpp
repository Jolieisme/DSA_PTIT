#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;         cin >> t;
    while(t--){
        int n;        cin >> n;
        int a[n+5];
        for(int i = 0; i<n; i++)       cin >> a[i];
        vector <vector<int>> res;
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(a[i] > a[j])     swap(a[i], a[j]);
            }
            vector <int> v(n);
            for(int x = 0; x<n; x++)    v[x] = a[x];
            res.push_back(v);
        }
        for(int i = res.size(); i>=1; i--){
            cout << "Buoc " << i << ": ";
            for(auto k : res[i-1])   cout << k << " ";
            cout << "\n";
        }
    }
}

