#include <bits/stdc++.h>
using namespace std;
int n,k, mark;
int a[1005], x[1005];

void print(){
    for(int i = 1; i<=k; i++){
        cout << x[a[i]] << " ";
    }
    cout << '\n';
}
void Try(int i){
    for(int j = a[i-1]+1; j<=n-k+i; j++){
        a[i] = j;
        if(i == k)    print();
        else   Try(i+1);
    }
}

int main(){
    int t;      cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i<=n; i++){
            cin >> x[i];
        }
        sort(x+1, x+n+1);
        Try(1);
    }
}