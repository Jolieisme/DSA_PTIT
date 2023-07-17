#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;          cin >> t;
    while(t--){
        int n,k;        cin >> n >> k;
        int a[n+5];
        for(int i = 0; i<n; i++)      cin >> a[i];
        deque <int> dq;
        dq.push_back(0);
        for(int i = 1; i<k; i++){
            while(dq.size() && a[dq.back()] < a[i])   
                dq.pop_back();
            dq.push_back(i);
        }
        cout << a[dq.front()] << " ";
        for(int i = k; i<n; i++){
            while(dq.size() && a[dq.back()] < a[i])   
                dq.pop_back();
            dq.push_back(i);
            if(i - dq.front() < k) cout << a[dq.front()] << ' ';
            else{
                dq.pop_front();
                cout << a[dq.front()] << ' ';
            }
        }
        cout << "\n";
    } 
}