#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;     cin >> t;
    while(t--){
        int d;        cin >> d;
        string s;     cin >> s;
        int cnt[1005] = {};
        int MAX = 0;
        for(char i : s){
            cnt[i]++;
            MAX = max(MAX, cnt[i]);
        }

        if(MAX <= ceil((float)s.size()/d))   cout << 1;
        else    cout << -1;
        cout << '\n';
    }
}