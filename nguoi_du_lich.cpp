#include <bits/stdc++.h>
#define ll long long
using namespace std;
int res = INT_MAX, b[25][25], n;
vector <int> v[1005], tmp1, tmp2;
bool mark[1005];
void check(int k, int sum, int tmp, int cnt){
    if(sum >= res)    return;
    mark[k] = 1;
    tmp1.push_back(k);
    for(auto x : v[k]){
        if(!mark[x])     check(x, sum+b[k][x], k, cnt+1);
        else if(x == 1 && x!= tmp && cnt == n){
            if(sum + b[k][x] < res){
                res = sum + b[k][x];
                tmp2 = tmp1;
            }
        }
    }
   tmp1.pop_back();
   mark[k] = 0;
}

int main(){
    cin >> n;
    int a[n+5][n+5];
    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<n+1; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<n+1; j++){
            if(i != j)    v[i].push_back(j);
        }
    }
    check(1, 0, 0, 1);
    cout << "(";
    for(auto y : tmp2)   cout << y << ',';
    cout << 1 << ')' << "\n";
    cout << res << '\n';
}