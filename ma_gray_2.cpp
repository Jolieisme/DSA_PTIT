#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;     cin >> t;
    while(t--){ 
        string s;     cin >> s;
        int tmp = s[0] - '0', x;
        cout << s[0];
        for(int i = 1; i<s.size(); i++){
            x = s[i] - '0';
            if(x != tmp){
                tmp = 1;
                cout << tmp;
            }
            else{
                tmp = 0;
                cout << tmp;
            }
        }
        cout << "\n";
    }
}