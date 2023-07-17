#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;    cin >> t;
    while(t--){
        int n;      cin >> n;
        int x[n+5];
        for(int i = 1; i<=n; i++){
            x[i] = i;
        }
    
        while(1){
            for(int i = 1; i<=n; i++){
                cout << x[i];
            }
            cout << " ";
            int tmp = n - 1;
            while(tmp > 0 && x[tmp] > x[tmp + 1])    tmp--;
            if(tmp == 0)   break;
            int k = n;
            while(x[k] < x[tmp])  k--;
            swap(x[k], x[tmp]);
            int l = tmp + 1, r = n;
            while(l < r){
                swap(x[l], x[r]);
                l++;
                r--;
            }
        }
        cout << "\n";
    } 
}