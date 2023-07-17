#include <bits/stdc++.h>
using namespace std;
char a[10005];
int main(){
    int t;    cin >> t;
    while(t--){
        int n;     cin >> n;
        for(int i = 1; i<=n; i++){
            a[i] = 'A';
        }

        while(1){
            for(int i = 1; i<=n; i++){
                cout << a[i];
            }
            cout << " ";
            int tmp = n;
            while(a[tmp] == 'B'){
                a[tmp] = 'A';
                tmp--;
            }
            if(tmp == 0)   break;
            else   a[tmp] = 'B'; 
        }   
        cout << "\n";
    }
}