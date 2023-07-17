#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mark[100005] = {};

bool cmp(int a, int b){
    if(mark[a] != mark[b])   return mark[a] > mark[b];
    return a < b;
}

int main(){
    int t;       cin >> t;
    while(t--){
        memset(mark, 0, sizeof(mark));
        int n;       cin >> n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin >> a[i];
            mark[a[i]]++;
        }

        sort(a, a+n, cmp);
        for(int i = 0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}