#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;      cin >> n;
    stack <int> st;
    while(n--){
        string s;       cin >> s;
        if(s == "PUSH"){
            int x;     cin >> x;
            st.push(x);
        }

        else if(s == "POP" && !st.empty()){
            st.pop();
        }

        else if(s == "PRINT"){
            if(!st.empty())    cout << st.top() << '\n';
            else    cout << "NONE" << "\n";
        }
    }
}