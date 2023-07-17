#include <bits/stdc++.h>
#define ll long long
using namespace std;
int m = 1e9 + 7;
int main(){
    int t;         cin >> t;
    while(t--){
        int n,k;         cin >> n >> k;
        int step[100005] = {0};
        step[0] = step[1] = 1;
        for(int i = 2; i<=n; i++){
            for(int j = 1; j<=min(i,k); j++){
                step[i] += step[i-j];
                step[i] %= m;
            }
        } 
        cout << step[n] << '\n';
    }
}