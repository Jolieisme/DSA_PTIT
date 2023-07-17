#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;      cin >> n;
    cin.ignore();
    queue <int> q;
    while(n--){
        string s;      cin >> s;
        int x;
        if(s == "PUSH"){
            cin >> x;
            q.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty())    cout << q.front() <<'\n';
            else  cout << "NONE" <<'\n';
        }
        else{
            if(!q.empty())    q.pop();   
        }
    }
}