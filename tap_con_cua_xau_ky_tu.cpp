#include <bits/stdc++.h>
#define ll long long
using namespace std;
char a[1005];
int check[1005];
string s;
int n;
void print(int cnt){
    for(int i = 1; i<=cnt; i++)     cout << a[i];
    cout << " ";
}

void Try(int i, int cnt = 1){
    for(int j = i; j <=n; j++){
        a[cnt] = s[j];
        if(!check[j]){
            check[j] = 1;
            print(cnt);
            Try(j + 1, cnt + 1);
            check[j] = 0;
        }
    }
}
int main(){
    int t;      cin >> t;
    while(t--){  
        memset(check, sizeof(check), 0);
        cin >> n >> s;
        s = "0" + s;
        Try(1);
        cout << '\n';
    }
}