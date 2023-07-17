#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> v[1005];
int main(){
    int n, tmp;      cin >> n;
    int a[n+5][n+5] = {0};
    string s;
    cin.ignore();
    for(int i = 1; i<=n; i++){
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s){
            tmp = stoi(s);
            v[i].push_back(tmp);
        }
    }


    for(int i = 1; i<=n; i++){
        for(auto j : v[i]){
            if(!a[i][j]){
                a[i][j] = 1;
                a[j][i] = 1;
            }
        }
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

}