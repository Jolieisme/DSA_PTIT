#include <bits/stdc++.h>
#define ll long long
using namespace std;
void Try(int n, char a, char b, char c){
    if(n == 1)     cout << a << " -> " << c <<"\n";
    else{
        Try(n-1, a, c, b);
        cout << a << " -> " << c << '\n';
        Try(n-1, b, a, c);
    }     
}

int main(){
    int n;      cin >> n;
    Try(n, 'A', 'B', 'C');
}