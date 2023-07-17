#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;      cin >> n;
    int a[n+5][n+5];
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(a[i][j] == 1){
                cout << j << " ";
            }
        }
        cout << "\n";
    }
}