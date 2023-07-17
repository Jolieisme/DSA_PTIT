#include <bits/stdc++.h>
#define ll long long
using namespace std;
int x;
int main(){
    int t;        cin >> t;
    while(t--){
        int n;      cin >> n;
        ll res = 0;
        priority_queue <int, vector<int>, greater<int> > q;
        for(int i = 0; i<n; i++){
            cin >> x;
            q.push(x);
        }
       
        while(q.size() >= 2){
            int min1 = q.top();
            q.pop();
            int min2 = q.top();
            q.pop();
            int sum = min1 + min2;
            q.push(sum);
            res += sum;
        }
        cout << res << "\n";
    }
}