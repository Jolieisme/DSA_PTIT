#include <bits/stdc++.h>
#define ll long long
using namespace std;
string check(string &s){
    stack <char> st;
    char x;
    bool check;
    for(char i : s){
        if(i == ')'){
            check = 0;
            x = st.top();
            st.pop();
            while(x != '('){
                if(x == '+' || x == '-' || x == '*' || x == '/')    check = 1;   
                x = st.top();
                st.pop();
            }
            if(!check)     return "Yes";
        }
        else    st.push(i);
    }
    return "No";   
}

int main(){
    int t;       cin >> t;
    string s; 
    cin.ignore();
    while(t--){
        getline(cin, s);
        cout << check(s) << '\n';
    }
}