#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main(){
    string s;       cin >> s;
    int res[205] = {};
    for(int i = 0; i<s.size(); i++){
        for(int j = 0; j<i; j++){
            if(s[i] >= s[j]){
                res[i] = min(res[i], res[j] + 1);
            }
        }
    }
    int MAX = INT_MIN;
    for(int i = 0; i< s.size(); i++){
        MAX = max(res[i], MAX);
    }
    cout << MAX + 1 << '\n';
}