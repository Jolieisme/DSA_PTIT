#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;         cin >> n;
    int a[n+5];
    for(int i = 0; i<n; i++)     cin >> a[i];
    int MAX = -1;    //tbc cua 1 day cac so k am luon <= max trong day
    for(int i = 1; i < n; ++i)
        MAX = max(MAX, a[i]);
    int res = 0, cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == MAX)     ++cnt;
        else{
            res = max(res, cnt);
            cnt = 0;
        }
    }
    cout << max(res, cnt);
}