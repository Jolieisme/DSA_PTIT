#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, cnt, a[10005], c1[10005], c2[10005], column[10005];
void Try(int i){
    for(int j = 1; j<=n; j++){
        if(column[j] == 0 && c1[i - j + n] == 0 && c2[i + j - 1] == 0){
            a[i] = j;
            column[j] = 1;
            c1[i - j + n] = 1; 
            c2[i + j - 1] = 1;
            if(i == n){
                cnt++;
            }
            else   Try(i+1);
            column[j] = 0;
            c1[i - j + n] = 0;
            c2[i + j- 1] = 0;
        }
    }
}

int main(){
    int t;       cin >> t;
    while(t--){
        cnt = 0;
        cin >> n;
        for(int i = 1; i<=n; i++){
            column[i] = c1[i] = c2[i] = 0;
        }
        Try(1);
        cout << cnt << "\n";
    }
}

