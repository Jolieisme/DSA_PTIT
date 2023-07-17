#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int m,n;     cin >> m >> n;
    stack <int> st;
    ll h[n], h1[n], l[n], r[n];
    for(int i = 0; i<n; i++){
        cin >> h[i];
        h1[i] = m - h[i]; 
    } 

    st.push(-1);
    for(int i = 0; i<n; i++){
        while(st.size() > 1 && h[st.top()] >= h[i])   st.pop();
        l[i] = st.top() + 1;
        st.push(i);
    }

    while(!st.empty())   st.pop();
    st.push(n);
    for(int i = n - 1; i >=0; i--){
        while(st.size() > 1 && h[st.top()] >= h[i])   st.pop();
        r[i] = st.top() - 1;
        st.push(i);
    }

    ll res = 0;
    for(int i = 0 ;i<n; i++){
        res = max(res, (r[i] - l[i] + 1) * h[i]);
    }

    while(!st.empty())   st.pop();
    st.push(-1);
    for(int i = 0; i<n; i++){
        while(st.size() > 1 && h1[st.top()] >= h1[i])  st.pop();
        l[i] = st.top() + 1;
        st.push(i);
    } 

    while(!st.empty())    st.pop();
    st.push(n);
    for(int i = n - 1; i>=0; i--){
        while(st.size() > 1 && h1[st.top()] >= h1[i])  st.pop();
        r[i] = st.top() - 1;
        st.push(i);
    }

    for(int i = 0; i<n; i++){
        res = max(res, (r[i] - l[i] + 1) * h1[i]);
    }

    cout << res;
}