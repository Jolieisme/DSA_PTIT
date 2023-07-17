#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;    cin >> t;
    while(t--){
        int n;      cin >> n;
        vector<pair<ll, ll>> vp(n);
        for(pair<ll, ll> &i : vp)
            cin >> i.first >> i.second;
        ll dp[n][2];
        dp[0][1] = vp[0].second;
        dp[0][0] = 0;
        for(int i = 1; i<n; i++){
            if(vp[i].first == vp[i - 1].first){
                dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + vp[i].second;
                dp[i][0] = dp[i - 1][1];
            }
            else{
                dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]);
                dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + vp[i].second;
            }
        }
        cout << min(dp[n - 1][0], dp[n - 1][1]) << "\n";
    }
    return 0;
}