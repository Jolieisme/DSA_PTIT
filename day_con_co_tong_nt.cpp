#include <bits/stdc++.h>
using namespace std;
int n, a[1005];
vector <vector<int>> res;
vector <int> v;

int prime(int u){
    if(u < 2)    return 0;
    for(int i = 2; i<=sqrt(u); i++){
        if(u % i == 0)    return 0;
    }
    return 1;
}
void Try(int i, int sum = 0){
    if(prime(sum))     res.push_back(v);
    for(int j = i; j<=n; j++){
        v.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        v.pop_back();
    }
}

int main(){
    int t;     cin >> t;
    while(t--){
        v.clear();
        res.clear();
        cin >> n;
        for(int i = 1; i<=n; i++){
            cin >> a[i];
        }
        sort(a+1, a+1+n, greater<int>());
        Try(1);
        sort(res.begin(), res.end());
        for(vector <int> i : res){
            for(int j : i){
                cout << j << " ";
            }
            cout << '\n';
        }
    }
}