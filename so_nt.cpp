#include <bits/stdc++.h>
using namespace std;
bool notPrime[205] = {};
int N = 200, n, s, p, st;
vector <int> prime, tmp;
vector<vector<int>> res;

void sieve(){
    int sqr = sqrt(N);
    for(int i = 2; i <= sqr; i++){
        if(!notPrime[i]){
            for(int j = i * i; j <= N; j += i)
                notPrime[j] = 1;
        }
    }
    for(int i = 2; i <= N; i++) if(!notPrime[i]) prime.push_back(i);
}

void Try(int i, int sum = 0){
    if(sum > s) return;
    if(sum == s){
        if(tmp.size() == n) res.push_back(tmp);
    }
    for(int j = i; j < prime.size(); ++j){
        tmp.push_back(prime[j]);
        Try(j + 1, sum + prime[j]);
        tmp.pop_back();
    }
}

int main(){
    sieve();
    int t;     cin >> t;
    while(t--){
        cin >> n >> p >> s;
        st = upper_bound(prime.begin(), prime.end(), p) - prime.begin();
        Try(st);
        cout << res.size() << endl;
        for(vector<int> i : res){
            for(int j : i) cout << j << ' ';
            cout << endl;
        }
        tmp.clear();
        res.clear();
    }
}