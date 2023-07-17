#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;     cin >> t;
    while(t--){
        queue <string> q;
        q.push("1");
        int n;      cin >> n;   //5 
        while(n--){
            string s = q.front();   //11
            cout << s << " ";   // 1 10 11 100
            q.pop(); 
            q.push(s + "0");    // 
            q.push(s + "1");   // 101 111
        }
        cout <<'\n';
    }
}