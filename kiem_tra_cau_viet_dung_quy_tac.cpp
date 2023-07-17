#include <bits/stdc++.h>
#define ll long long
using namespace std;
string check(string s){
    stack <char> st;
    for(char i : s){
        if(i == '(' || i == '['){
            st.push(i);
        }
        if(i == ')'){
            if(st.size() && st.top() == '('){
                st.pop();
            }
            else    return "NO";
        }

        else if (i == ']'){
            if(st.size() && st.top() == '['){
                st.pop();
            }
            else   return "NO";
        }
    }
    if(!st.size())     return "YES";
    else     return "NO";
}

int main(){
    int t;       cin >> t;
    cin.ignore();
    while(t--){
        string s;      getline(cin, s);
        cout << check(s) << "\n";
    }
}