#include <bits/stdc++.h>
using namespace std;
int n, k, mark;
int a[10005], b[10005];

void generation(){
    int j = k;
    while (a[j] >= n - k + j)     j--;
    if (j == 0)     mark = 0;
    else{
        a[j] = a[j] + 1;
        for (int i = j + 1; i <= k; i++){
            a[i] = a[i - 1] + 1;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        mark = 1;
        int cnt = 1;
        vector<int> v2;
        for(int i = 1; i <= k; i++)   a[i] = i;

        for(int i = 1; i <= k; i++){
            cin >> b[i];
            v2.push_back(b[i]);
        }

        while(mark){
            vector<int> v1;
            for (int i = 1; i <= k; i++)
                v1.push_back(a[i]);
            if (v1 == v2)
                cout << cnt << '\n';
            cnt++;
            generation();
        }
    }
}