#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;     cin >> t;
    while(t--){
        int n;      cin >> n;
        vector <int> v(n);
        for(int i = 0; i<v.size(); i++)   cin >> v[i];
        cout << lower_bound(v.begin(), v.end(), 1) - v.begin() << "\n";
    }
}
