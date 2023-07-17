#include <bits/stdc++.h>
#define ll long long
using namespace std;
int idx = 1, n, k, a[1005];
int check(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void print()
{
    cout << idx << ": ";
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << '\n';
}

void generation()
{
    for (int i = 1; i <= k; i++)
        a[i] = i;
    while (1)
    {
        if (check(idx))
            print();
        idx++;
        int j = k;
        while (a[j] >= n - k + j)
            j--;
        if (j == 0)
            return;
        a[j] = a[j] + 1;
        for (int x = j + 1; x <= k; x++)
        {
            a[x] = a[x - 1] + 1;
        }
    }
}

int main()
{
    cin >> n >> k;
    generation();
}