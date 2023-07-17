#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct task{
    int start, finish;
}a[1005];

bool cmp(task x, task y){
    return x.finish < y.finish;
}

int main(){
    int t;      cin >> t;
    while(t--){
        int n;     cin >> n;
        for(int i = 0; i<n; i++)        cin >>  a[i].start;
        for(int i = 0; i<n; i++)        cin >>  a[i].finish;
        sort(a, a+n, cmp);
        int idx = 0, cnt = 1;
        for(int j = 1; j<n; j++){
            if(a[j].start >= a[idx].finish){
                idx = j;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}

