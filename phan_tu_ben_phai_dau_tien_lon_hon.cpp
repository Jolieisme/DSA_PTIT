#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        int n;      cin >> n;
        int a[n+5], res[n];
        stack <int> st;
        for(int i = 0; i<n; i++)    cin >> a[i];
        res[n-1] = -1;
        st.push(a[n-1]);
        for(int i = n-2; i>=0; i--){
            if(st.size() && a[i] < st.top()){
                res[i] = st.top();
                st.push(a[i]);
            }

            else{ 
                while(st.size() && a[i] >= st.top())   st.pop();
                if(st.size())  res[i] = st.top();
                else res[i] = -1;
                st.push(a[i]);
            }
        }
        for(auto i : res)    cout << i << " ";
        cout << "\n";
    }
}