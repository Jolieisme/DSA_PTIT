#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int a,b;       cin >> a >> b;
    int tmp = b;
    int cnt = 0;
    vector <int> v(tmp+5, 1);
    for(int i = 2; i<=tmp; i++){
        for(int j = i; j<=tmp; j+=i){
            v[j] += i;
        }
    }
    for(int i = a; i<=b; i++)      cnt += ((v[i] - i) > i);
    cout << cnt;
}