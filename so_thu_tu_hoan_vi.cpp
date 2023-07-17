#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;     cin >> t;
    while(t--){
        int cnt = 1;
        int n;    cin >> n;
        vector <int> v1(n), v2(n);
        for (int i = 0; i<n; i++){
            cin >> v1[i];
            v2[i] = i+1;
        } 
        if(v1 == v2)    cout << 1 << "\n";
        else{
            while(v2 != v1){
                cnt++;
                next_permutation(v2.begin(), v2.end());
            }
            cout << cnt << '\n';
        }
    }
}