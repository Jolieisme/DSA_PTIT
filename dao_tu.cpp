#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    cin.ignore();
    while(t--){
        stack <string> st;
        string s;     getline(cin, s);
        stringstream ss(s);
        while(ss >> s)  st.push(s);
        while(st.size()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << '\n';
    }
}