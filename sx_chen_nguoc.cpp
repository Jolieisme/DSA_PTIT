#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;        cin >> n;
    int a[n+5];
    vector <vector<int>> res;
    set <int> s;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        s.insert(a[i]);
        vector <int> v;
        for(auto i : s)        v.push_back(i);
        res.push_back(v);
    }
    for(int i = res.size()-1; i>=0; i--){
        cout << "Buoc " << i << ": ";
        for(auto k : res[i])   cout << k << " ";
        cout << "\n";
    }
}

