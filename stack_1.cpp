#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s;
    int x; 
    stack <int> st;
    while(cin >> s){
        if(s == "push"){
            cin >> x;
            st.push(x);
        }
        else if(s == "pop" && st.size())
            st.pop();
        else{
            if(st.empty())      cout << "empty" << '\n';
            else{
                stack <int> tmp;
                while(st.size()){
                    tmp.push(st.top());
                    st.pop();
                }
                while(tmp.size()){
                    cout << tmp.top() << " ";
                    st.push(tmp.top());
                    tmp.pop();
                }
                cout << '\n';
            }
        }
    }
}