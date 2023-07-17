#include <bits/stdc++.h>
#define ll long long
using namespace std;
int binary_search(vector <ll> v, int l, int r, int x){
    while(l <= r){
        int mid = (l+r) / 2;
        if(v[mid] == x)    return mid;
        else if (v[mid] < x)    l = mid + 1;
        else   r = mid - 1;
    }
    return -1;
}

int check(vector <ll> v, int n){
    for(int i = 0; i<n-2; i++){
        for(int j = i+1; j<n-1; j++){
            ll c = sqrt(v[i] * v[i] + v[j] * v[j]);
            if(c* c == v[i] * v[i] + v[j] * v[j]){
                int idx = binary_search(v, j, n-1, c);
                if(idx != -1)   return 1;
            }
        }
    }
    return 0;
}

int main(){
    int t;     cin >> t;
    while(t--){
        int n;      cin >> n;
        vector <ll> v(n);
        for(int i = 0; i<n; i++)    cin >> v[i];
        sort(v.begin(), v.end());
        if(check(v, n))   cout << "YES";
        else     cout << "NO";
        cout << "\n";
    }
}