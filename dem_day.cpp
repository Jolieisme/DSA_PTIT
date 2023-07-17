#include <bits/stdc++.h>
using namespace std;
long long mod = 123456789;
long long Try(long long n)
{
    if (n == 0)
        return 1;
    long long x = Try(n / 2);
    if (n % 2 == 0)
        return x * x % mod;
    else
        return 2 * x * x % mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << Try(n - 1) << endl;
    }
}
