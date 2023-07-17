#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;        cin >> n;
    int cnt = 0, res = 0;
    int a[n+5];
    int MAX = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        MAX = max(MAX, a[i]);
    }
    
    for(int i = 0; i<n; i++){
        if(a[i] == MAX)    cnt++;
        else{
            res = max(res, cnt);
            cnt = 0;
        }  
    }
    cout << max(res, cnt);
}