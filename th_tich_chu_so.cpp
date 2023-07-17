#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;         cin >> t;
    while(t--){
        int n;       cin >> n;
        if(n < 10){
            cout << n << "\n";
            continue;
        }

        stack<int> st;
        int i = 9;
        while(n > 1 && i > 1){
            while(n % i == 0){
                st.push(i);
                n /= i;
            }
            i--;
        }
        if(st.empty() || n > 9){
            cout << -1 << endl;
            continue;
        }
        
        while(st.size()){
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
}