#include <bits/stdc++.h>
#define ll long long
using namespace std;

string fibonacci(int n, unordered_map<int, string> memo){
    if (memo.find(n) != memo.end())       return memo[n];
    string result;
    if (n == 0)          result = "A";
    else if (n == 1)     result = "B";
    else                 result = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    memo[n] = result;
    return result;
}

int count_B_in_fibonacci(int n, int k){
    unordered_map<int, string> memo;
    string fib = fibonacci(n, memo);
    int count = 0;
    for (int i = 0; i < k; i++){
        if (fib[i] == 'B')      count++;
    }
    return count;
}

int main(){
    int n, k;       cin >> n >> k;
    int result = count_B_in_fibonacci(n, k);
    cout << result << "\n";
}