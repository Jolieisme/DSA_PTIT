#include <bits/stdc++.h>
#define ll long long
using namespace std;
char a[105], x;
int k;
void Try(int i, char c){
    for(char j = c; j <= x; j++){
        a[i] = j;
        if(i == k){
            for(int l = 1; l <= k; l++)     cout << a[l];
            cout << "\n";
        }
        else    Try(i+1, j);
    }
}

int main(){
    cin  >> x >> k;
    Try(1, 'A');
}