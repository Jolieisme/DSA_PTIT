#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        int n;     cin >> n;
        int tmp, mod = 1e9 + 7, sum = 0;
        priority_queue <int, vector<int>, greater <int>> pq;
        while(n--){
            cin >> tmp;
            pq.push(tmp);
        }
        while(pq.size() > 1){
            tmp = pq.top();
            pq.pop();
            tmp += pq.top();
            pq.pop();
            if(tmp >= mod)    tmp -= mod;
            sum += tmp;
            if(sum >= mod)    sum -= mod;
            pq.push(tmp);
        }
        cout << sum << '\n';
    }
}