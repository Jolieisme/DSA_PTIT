#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        string s;       cin >> s;
        stack <int> st;
        st.push(-1);
        int res = -1;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '(')  st.push(i);
            else{
                st.pop();
                if(st.empty())    st.push(i);
                res = max(res, i - st.top());
            } 
        }
        cout << res << "\n";
    }
}