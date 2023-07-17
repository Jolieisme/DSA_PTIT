#include<bits/stdc++.h>
using namespace std;
int check(string s){
    int mark[1005] = {};
    int MAX = 0;
    for(int i = 0; i<s.size(); i++){
        mark[s[i]]++;
        MAX = max(mark[s[i]], MAX);
    }
    if (MAX <= s.size() - MAX + 1) return 1;
    return -1;
}

int main(){ 
    string s;
    int t;     cin >> t;
    while(t--){
        cin >> s;
        cout << check(s) << "\n";
    }
}
