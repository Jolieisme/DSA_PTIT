#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        int n;     cin >> n;
        vector <string> s;
        s.push_back("0");
        s.push_back("1");
        for(int i = 2; i<=n; i++){
            int len = s.size();
            for(int j = len - 1; j>=0; j--){
                s.push_back(s[j]);
            }

            for(int j = 0; j<len; j++){
                s[j] = "0" + s[j];
            }
            for(int j = len; j<s.size(); j++){
                s[j] = "1" + s[j];
            }
        }

        for(string i : s)     cout << i << " ";
        cout << '\n';
    }
}