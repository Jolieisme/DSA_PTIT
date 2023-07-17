#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair <int, int> a, pair <int, int> b){
    return a.second < b.second;
}

int main(){
    int t;        cin >> t;
    while(t--){
        int n;       cin >> n;
        vector <pair <int, int>> f(n);
        for(int i = 0; i<n; i++)     cin >> f[i].first >> f[i].second;
        sort(f.begin(), f.end(), cmp);
        int last = 0, cnt = 0; 
        for(pair <int, int> i : f){
            if(i.first < last)    continue;
            last = i.second;
            cnt++;
        }
        cout << cnt << "\n";
    }
}