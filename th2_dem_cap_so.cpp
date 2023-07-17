#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, cnt = 0, res = 0;     cin >> n;
    int a[n+5];  
    stack <int> st1, st2;  
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        st1.push(a[i]);
        st2.push(i);
        cnt++;
        if(cnt == 2){
            res++;
            cnt--;
        }
    }

    while(st2.size()){
        int x = st2.top();
        st1.pop();
        int y = st2.top();
        st1.pop();
        for(int i = y+1; i<x; i++){
            for(a[i] > a[x] ||a[i] > a[y]){
                break;
            }
            else res++;
        }
        st2.push(x);
    }
}