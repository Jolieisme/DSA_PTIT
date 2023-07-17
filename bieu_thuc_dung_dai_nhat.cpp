#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        string s;      cin >> s;
        int cnt = 0;
        while(1){
            int pos = s.find("()");
            if(pos == -1)    break;
            else{
                cnt += 2;
                s.erase(pos, 2);
            }
        }
        cout  << cnt << '\n';
    }
}