#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
bool check(vector <int> v, int m){
    for(int i = 2; i <=n; i++){
        if(abs(v[i] - v[i-1]) == 1)  return 0;
    }
    return 1;
}

int main(){
    int t;      cin >> t;
    while(t--){
        cin >> n;
        if(n<4){
            cout << '\n';
            continue;
        }

        vector <int> v(n+1);
        for(int i = 1; i<=n; i++)
            v[i] = i;

        while(next_permutation(v.begin()+1, v.end())){
            if(check(v,n)){
                for(int i = 1; i<=n; i++)
                    cout << v[i];
                cout << '\n';
            }
        }
        cout << '\n';
    }
}