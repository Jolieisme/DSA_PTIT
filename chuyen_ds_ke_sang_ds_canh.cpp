#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, tmp;    cin >> n;
    vector <vector<int>> v(n+5);
    string s;
    cin.ignore();   
    for(int i = 1; i<=n; i++){
        getline(cin , s);
        stringstream ss(s);
        while(ss >> s){
            tmp = stoi(s);
            v[i].push_back(tmp);
        }
    }

    for(int i = 1; i<=n; i++){
        sort(v[i].begin(), v[i].end());
        for(auto j : v[i]){
            if(j > i){
                cout << i << " " << j << "\n";
            }
        }     
    }
}