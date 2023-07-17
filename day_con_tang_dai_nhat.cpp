#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;      cin >> n;
    int a[n+5], tmp = 0;
    for(int i = 0; i<n; i++)     cin >> a[i];
    int res[n+5];
    for(int i = 0; i<n; i++){
        res[i] = 1;
        for(int j = 0; j<i; j++){
            if(a[j] < a[i]){
                res[i] = max(res[i], res[j] + 1);
            }
        }
        tmp = max(tmp, res[i]);
    }
    cout << tmp << "\n";
}