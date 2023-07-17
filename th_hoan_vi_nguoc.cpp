#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string s = "";
        for(int i = 1; i <= n; ++i)
            s += (char)i + '0';
        stack <string> st;
        st.push(s);
        while(next_permutation(s.begin(), s.end()))     st.push(s);
        while(st.size() > 1){
            cout << st.top() << ',';
            st.pop();
        }
        cout << st.top() << "\n";
    }
}