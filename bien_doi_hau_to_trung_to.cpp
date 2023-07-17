#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;        cin >> t;
    while(t--){
        string s, tmp;      cin >> s;
        stack <string> st;
        for(char i : s){\
            tmp = "";
            if(isalpha(i))   st.push(tmp + i);
            else{
                if(i == '+' || i == '-' || i =='*' || i == '/'){
                   tmp = st.top();
                   st.pop();
                   tmp = st.top() + i + tmp;
                   st.pop();
                   st.push('(' + tmp + ')');
                }
            }
        }
        cout << st.top() << '\n';
    }
}