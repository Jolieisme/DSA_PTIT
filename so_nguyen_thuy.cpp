#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    vector<string> v;
    queue <string> q;
    v.push_back("44");
    v.push_back("55");
    q.push("4");
    q.push("5");
    string s1, s2, tmp;
    while(v.size() < 10005){
        tmp = q.front();
        q.pop();
        s1 = tmp + '4';
        s2 = tmp + '5';
        q.push(s1);
        q.push(s2);
        reverse(s1.begin(), s1.end());
        v.push_back(tmp + '4' + s1);
        
        reverse(s2.begin(), s2.end());
        v.push_back(tmp + '5' + s2);
    }

    int t;     cin >> t;
    while(t--){
        int n;    cin >> n;
        for(int i = 0; i < n; ++i)
            cout << v[i] << ' ';
        cout << "\n";
    }
}

