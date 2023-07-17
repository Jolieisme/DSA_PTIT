#include <bits/stdc++.h>
#define ll long long
using namespace std;
string check(vector <int> a, vector <int> b){
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i] && a[i] != b[a.size() - i - 1])    return "No";
    } 
    return "Yes";
}

int main(){
    int t;        cin >> t;
    while(t--){
        int n;      cin >> n;
        vector <int> a(n), b(n);
        for(int &i : a)     cin  >> i;
        b = a;
        sort(b.begin(), b.end());
        cout << check(a,b) << '\n';
    }
}
