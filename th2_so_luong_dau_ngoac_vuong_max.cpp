#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s;
        cin >> s;
        int cnt = 0, res = 0;
        stack <pair<char, int>> st;
        st.push({'@', 0});
        for(char i : s){
            if(st.size() && ((i == ')' && st.top().first == '(') || (i == ']' &&  st.top().first == '['))){
                st.pop();
                if(st.size())    res = max(res, cnt - st.top().second);
            }
            else{
                if(i == '[')    cnt++;
                st.push({i, cnt});
            }
        }
    cout << res;
}
