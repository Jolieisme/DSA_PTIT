#include <bits/stdc++.h>
using namespace std;
int n, m, x[105];
int a[5] = {0, 2, 3, 5, 7};

int check(int k){
    int mark[15] = {};
    for(int i = 1; i<=k; i++){
        mark[x[i]]++;
    }
    for(int i = 1; i<=4; i++){
        if(mark[a[i]] == 0)    return 0;
    }
    return 1;
}

void print(int k){
    if(check(k) && x[k] % 2 != 0){
        for(int i = 1; i<=k;i++)    cout << x[i];
        cout << "\n";
    }
}

void Try(int i){
    for(int j = 1; j<=4; j++){
        x[i] = a[j];
        if(i == m)    print(m);
        else  Try(i+1);
    }
}

int main(){
    cin >> n;   //5
    for(m = 4; m<=n; m++){
        Try(1);
    }
}