#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;       cin >> t;
    cin.ignore();
    while(t--){
        string s;       cin >> s;
        stack <char> st;
        int cnt = 0;
        for(char i : s){
            if(i == '(')    st.push(i);
            else{
                if(!st.empty())   st.pop();
                else{
                    st.push(i);
                    cnt++;
                }    
            }
        }     
        cout << st.size()/2 + cnt << '\n';
    }
}