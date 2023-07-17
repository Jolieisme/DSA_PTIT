#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        int n, s;     cin >> n >> s;
        int a[n+5];
        for(int i = 0; i<n; i++)     cin >> a[i];
        vector <bool>  res(s+5, false); 
        res[0] = true;
        for(int i = 0; i<n; i++){
            for(int j = s; j>= a[i]; j--){
                if(res[j - a[i]]){
                    res[j] = true;
                }
            }
        }
        if(res[s])     cout << "YES";
        else    cout << "NO";
        cout << '\n';
    }
}