#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;        cin >> n;
    int a[n+5];
    for(int i = 0; i<n; i++)       cin >> a[i];
    vector <vector<int>> res;
    for(int i = 0; i<n-1; i++){
        int min_pos = i;
        for(int j = i+1; j<n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
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

