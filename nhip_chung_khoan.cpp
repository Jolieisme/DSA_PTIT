#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000005];
int main(){
    int t;     cin >> t;
    while(t--){
        stack <int> st;
        st.push(0);
        int n;      cin >> n;
        for(int i = 1; i<=n; i++){
            cin >> a[i];
            while(st.size() > 1 && a[st.top()] <= a[i]) 
                st.pop();
            cout << i - st.top() << " ";
            st.push(i);
        }
        cout << '\n';
    }
}