#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int n;
char a[2] = {'6', '8'};

bool check(){
    int cnt6 = 0, cnt8 = 0;
    for(char i : s){
        if(i == '8'){
            cnt8++;
            cnt6 = 0;
        }
        else{
            cnt6++;
            cnt8 = 0;
        }
        if(cnt6 > 3 || cnt8 > 1)   return 0;
    }
    return 1;
}

void Try(int i){
    for(int j = 0; j<=1; j++){
        s[i] = a[j];
        if(i == n){
            if(check())    cout << s << '\n';
        }
        else    Try(i+1);
    }
}

int main(){
    cin >> n;
    s.resize(n);
    s[0] = '8';
    s.back() = '6';
    n-=2;
    Try(1);
}
