#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        string s, tmp;     cin >> s;
        stack <string> st;
        for(int i = s.size() - 1; i>=0; i--){
            tmp = "";
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                tmp += '(' + st.top();
                st.pop();
                tmp += s[i] + st.top() + ')';
                st.pop();
                st.push(tmp);
            }
            else   st.push(tmp + s[i]);  // tao string
        }
        while(st.size()){
            cout << st.top();
            st.pop();
        }
        cout << '\n';
    }
}