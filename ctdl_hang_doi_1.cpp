#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;      cin >> t;
    while(t--){
        int n;     cin >> n;
        char x;
        int y;
        deque <int> dq;
        while(n--){
            cin >> x;
            switch(x){
                case '1':
                {
                    cout << dq.size() <<'\n';
                    break;
                }
                case '2':
                {
                    if(dq.empty())   cout << "YES" << '\n';
                    else   cout << "NO" << '\n';
                    break;
                }
                case '3':
                {
                    cin >> y;
                    dq.push_back(y);
                    break;
                }
                case '4':
                {
                    if(!dq.empty())   dq.pop_front();
                    break;
                }
                case '5':
                {
                    if(!dq.empty())    cout << dq.front()<< '\n';
                    else   cout << -1 << '\n';
                    break;
                }
                default:
                {
                    if(!dq.empty())    cout << dq.back()<<'\n';
                    else   cout << -1 << '\n';
                    break;
                }
            } 
        }
        cout << '\n';
    }
}