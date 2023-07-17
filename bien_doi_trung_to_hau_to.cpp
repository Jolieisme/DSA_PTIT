#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        string s, tmp, x;     cin >> s;
        stack <string> st;
        for(int i = 0; i<s.size(); i++){
            if(s[i] != '(' && s[i] != ')'){
                tmp = "";
                st.push(tmp + s[i]);    //tao string
            }
        }
        while(st.size() > 1){
            tmp = st.top();
            st.pop();
            x = st.top();
            st.pop();
            if(x == "+" || x == "-" || x == "*" || x == "/"){
                tmp = tmp + x;
                st.push("" + tmp);
            }
            else{
                tmp = x + tmp; 
                st.push("" + tmp);
            }  
        }
        cout << st.top() << '\n';
    }
}