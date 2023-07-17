#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;     cin >> n;
    deque <int> dq;
    while(n--){
        string s;      cin >> s;
        int x;
        if(s == "PUSHFRONT"){
            cin >> x;
            dq.push_front(x);
        }
        else if(s == "PUSHBACK"){
            cin >> x;
            dq.push_back(x);
        }
        else if(s == "PRINTFRONT"){
            if(!dq.empty())   cout << dq.front() << "\n";
            else  cout << "NONE" << '\n';
        }
        else if(s == "PRINTBACK"){
            if(!dq.empty())    cout << dq.back() <<"\n";
            else   cout << "NONE" << '\n';
        }
        else if(s == "POPFRONT"){
            if(dq.size())   dq.pop_front();
        }
        else if(s == "POPBACK"){
              if(dq.size())   dq.pop_back();
        }
    }
}