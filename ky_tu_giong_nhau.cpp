#include <bits/stdc++.h>
#define ll long long
using namespace std;
int calculate(int n, int x, int y, int z){
    int f[105] = {0};
    f[1] = x;
    for(int i=2; i<=n; i++){
        if(i % 2 == 0)
            f[i] = min(f[i-1] + x, f[i/2] + z);
        else
            f[i] = min(f[i-1] + x, f[(i+1)/2] + y + z);
    }
    return f[n];
}

int main(){
    int t;       cin >> t;
    while(t--){
        int n;     cin >> n;
        int x, y, z;     cin >> x >> y >> z;
        cout << calculate(n, x, y, z) << '\n';
    }
}