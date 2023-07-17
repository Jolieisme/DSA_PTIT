#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;     cin >> t;
    while(t--){
        string s;      cin >> s;
        stack <int> st1;
        stack <char> st2;
        int a[1005];
        memset(a, -1, sizeof(a));
        for(int i = 0; i<s.size(); i++){
            if(s[i] ==  ')'){
                if(st2.size() && st2.top() == '('){
                    s[i] = '1';
                    s[st1.top()] = '0';
                    st2.pop();
                    st1.pop();
                }
            }
            else if(s[i] == '('){
                st1.push(i);   // luu vi tri ngoac mo
                st2.push(s[i]);   // luu ngoac mo
            }
        }

        for(int i = 0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == ')'){
                cout << a[i];
            }
            else   cout << s[i];
        }
        cout << '\n';
    }
}