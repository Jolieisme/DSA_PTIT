#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;       cin >> t;
    while(t--){
        string s;      cin >> s;
        stack <ll> st;
        ll a,b;
        for(char i : s){
            if(isdigit(i))     st.push(i - '0');
            else{
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                switch(i){
                    case '+':
                    {
                        st.push(a+b);
                        break;
                    }
                    case '-':
                    {
                        st.push(b-a);
                        break;
                    }
                    case '*':
                    {
                        st.push(a*b);
                        break;
                    }
                    default:
                    {
                        st.push(b/a);
                        break;
                    }
                } 
            }
        }
        cout << st.top() << '\n';
    }
}