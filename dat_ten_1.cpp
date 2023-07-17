#include <bits/stdc++.h>
using namespace std;
int n,k, a[10005], mark;
string b[10005];

void generation(){
    int j = k;
    while(a[j] >= n-k+j)   j--;
    if(j == 0)   mark = 0;
    else{
        a[j]++;
        for(int i = j+1; i<=k; i++){
            a[i] = a[i-1] + 1;
        }
    }
}

int main(){
    cin >> n >> k;
    set <string> s;
    vector <string> v;
    string x;
    for(int i = 1; i<=n; i++){
        cin >> b[i];
        s.insert(b[i]);
    }

    for(auto i : s)   v.push_back(i);
    n = v.size();
    mark = 1;

    for(int i = 1; i<=k; i++)   a[i] = i;
    while(mark){
        for(int i = 1; i<=k; i++){
            cout << v[a[i]-1] << " ";
        }
        cout << '\n';
        generation();
    }
}