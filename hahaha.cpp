#include <bits/stdc++.h>
using namespace std;
int a[105] = {},n, k;

void print(){
    for(int i = 1; i <= n; i++)   cout << a[i];
    cout << "\n";
}

void check(string s){
    if(s[0] != 'H')  return;
    if(s[s.size() - 1] != 'A')   return;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == s[i+1] && s[i] == 'H'){
            return;
        }
    }
    cout << s << '\n';
}

void Try(string s){
    if(s.size() == n)  check(s);
    else{
        Try(s + 'A');
        Try(s + 'H');
    }
}

int main(){
    int t;     cin >> t;
    while(t--){
        cin >> n;
        Try("");
    }
}