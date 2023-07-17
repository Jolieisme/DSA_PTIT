#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int n;     cin >> n;
        queue <string> q;
        deque <string> result;
        q.push("6");
        q.push("8");
        result.push_back("6");
        result.push_back("8");
        while(q.front().size() < n){
            queue <string> tmp;
            while(q.size()){
                result.push_back(q.front() + "6");
                result.push_back(q.front() + "8");
                tmp.push(q.front() + "6");
                tmp.push(q.front() + "8");
                q.pop();
            }
            q = tmp;
        }
        while(result.size()){
            cout << result.back()<< " ";
            result.pop_back();
        }
        cout << '\n';
    }
}