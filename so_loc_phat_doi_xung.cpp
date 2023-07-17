#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(string s){
    for(int i = 0; i<s.size(); i++){
        if(s[i] != s[s.size() - i - 1])   return 0;
    }
    return 1;
}

int main(){
    int t;      cin >> t;
    while(t--){
        int cnt = 0;
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
            if(result.front().size() % 2 == 0 && check(result.front())){
                cout << result.front() << " ";
                cnt++;
                if(cnt == n)    break;
            }
            result.pop_front();
        }
        cout << '\n';
    }
}