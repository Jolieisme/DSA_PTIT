#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;        cin >> t;
    while(t--){
        ll p;        cin >> p;
        stack <int> st;
        if(p < 10){
            cout << p << '\n';
            continue;
        }
        int i = 9;
        while(p > 1 && i > 1){
            while(p % i == 0){
                st.push(i);
                p = p/i;
            }
            i--;
        }

        if(st.empty() || p > 9){
            cout << -1 << '\n';
            continue;
        }

        while(st.size()){
            cout << st.top();
            st.pop();
        }
        cout << '\n';
    }
}