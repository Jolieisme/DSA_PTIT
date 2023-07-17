#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        string s1, s2;      cin >> s1 >> s2;
        int f[s1.size()+1][s2.size()+1];
        for(int i = 0; i<=s2.size(); i++)  f[0][i] = 0;
        for(int i = 0; i<=s1.size(); i++)  f[i][0] = 0;

        for(int i = 0; i<s1.size(); i++){
            for(int j = 0; j<s2.size(); j++){
                if(s1[i] == s2[j])  f[i+1][j+1] = f[i][j] + 1;
                else    f[i+1][j+1]   = max(f[i][j+1], f[i+1][j]);
            }
        }
        cout << f[s1.size()][s2.size()] << '\n';
    }
}