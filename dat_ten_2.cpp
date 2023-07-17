#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005], n,k;

void Try(int i){
    for(int j = a[i-1] +1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k){
            for(int x = 1; x<=k; x++){
                cout << (char) (a[x] + 'A' - 1);
            }
            cout << '\n';
        }
        else    Try(i+1);
    }
}

int main(){
    int t;      cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1); 
    }
}