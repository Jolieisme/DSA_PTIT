#include <bits/stdc++.h>
using namespace std;
int n;
int used[105] = {}, x[1005];
void print(){
    for(int i = n; i>=1; i--){
        cout << x[i];
    }
    cout << " ";
}

void Try(int i){
    for(int j = n; j>=1; j--){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == 1)  print();
            else    Try(i-1);
            used[j] = 0;
        }
    }
}

int main(){
    int t;    cin >> t;
    while(t--){
        cin >> n;
        Try(n);
        cout << '\n';
    }
}