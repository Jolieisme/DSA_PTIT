#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int a, b, idx;
    cin >> a >> b;
    ll res = 0, cnt = 0;
    queue<ll> q;
    vector <ll> luckyNum;
    q.push(4);
    q.push(7);
    luckyNum.push_back(4);
    luckyNum.push_back(7);
    ll tmp, x, y;
    while(q.front() <= 1e9){
        tmp = q.front();
        q.pop();
        x = tmp * 10 + 4;
        y = tmp * 10 + 7;
        q.push(x);
        q.push(y);
        luckyNum.push_back(x);
        luckyNum.push_back(y);
    }
    idx = lower_bound(luckyNum.begin(), luckyNum.end(), a) - luckyNum.begin();
    while(a <= b){
        cnt = min(luckyNum[idx], (ll)b) - a + 1;
        res += cnt * luckyNum[idx];
        a = luckyNum[idx] + 1;
        ++idx;
    }
    cout << res;
}