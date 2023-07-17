#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005] = {}, n;

bool check(){
    for(int i = 1; i<=n; i++){
        if(a[i] != a[n - i + 1])    return 0;
    }
    return 1;
}

void Try(int i){
    for(int j = 0; j<=1; j++){
        a[i] = j;
        if(i == n){
            if(check()){
                for(int i = 1; i<=n; i++)    cout << a[i] << " ";
                cout << "\n";
            }
        }
        else Try(i + 1);
    }
}

int main(){
    cin >> n;
    Try(1);
}