#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;     cin >> t;
    while(t--){
        string s;      cin >> s;
        stack <ll> st;
        ll a,b;
        for(int i = s.size() - 1; i>=0; i--){
            if(isdigit(s[i]))    st.push(s[i] - '0');
            else{
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                switch(s[i]){
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
                        st.push(b*a);
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