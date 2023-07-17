#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s = 0;
        int n;
        cin >> n;
        int a[n + 5];
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
                check = 1;
        }
        int MAX = INT_MIN;
        if (!check)
        {
            for (int i = 0; i < n; i++)
            {
                MAX = max(MAX, a[i]);
            }
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                s += a[i];
                if (s < 0)
                    s = 0;
                MAX = max(s, MAX);
            }
        }

        cout << MAX << '\n';
    }
}