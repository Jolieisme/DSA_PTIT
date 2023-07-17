#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;       cin >> n;
    int a[n+5];
    for(int i = 0; i<n; i++)       cin >> a[i];
    for(int i = 0; i<n-1; i++){
        int notSwap = 1;
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){  
                swap(a[j], a[j+1]);
                notSwap = 0;
            }
        }
        if(notSwap)    break;
        cout << "Buoc " << i+1 << ": ";
        for(int x = 0; x<n; x++)    cout << a[x] << " ";
        cout <<'\n';
    }
}