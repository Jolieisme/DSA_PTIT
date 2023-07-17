#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main(){
    int t,x;        cin >> t;
    while(t--){
        string s;
        int n;    cin >> n;
        int a[n+5];
        stack <string> st;
        queue <int> q;
        for(int i = 0; i<n; i++){
            cin >> a[i];
            q.push(a[i]);
        }

        for(int i = 1; i<=n; i++){
            s = ""; 
            s += '[';
            for(int j = n-i; j >= 0; j--){
                x = q.front();
                s += to_string(x);
                if(j)  s += ' ';
                q.pop();
                x += q.front();
                if(j)    q.push(x);
            }
            s += "] ";
            st.push(s);
        }
        while(st.size()){
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
}