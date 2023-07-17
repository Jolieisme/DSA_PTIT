#include <bits/stdc++.h>
#define ll long long
using namespace std;
string check(string s){
    stack <char> st;
    for(char i : s){
        if(i == '(' || i == '{' || i == '['){
            st.push(i);
        }
        else{
            if(i == ')'){
                if(st.size() && st.top() == '(')   st.pop();
                else   return "NO";
            }
            else if(i == '}'){
                if(st.size() && st.top() == '{')   st.pop();
                else   return "NO";
            }
            else{
                if(st.size() && st.top() == '[')   st.pop();
                else return "NO";
            }
        }
    }
    if(st.size())     return "NO";
    else   return "YES";
}

int main(){
    int t;        cin >> t;
    while(t--){
        string s;       cin >> s;
        cout << check(s) << "\n";
    }
}