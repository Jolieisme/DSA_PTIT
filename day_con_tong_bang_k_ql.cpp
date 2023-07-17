#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[105], b[105], n, k;
vector<vector<int>> res;
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            int s = 0;
            for (int x = 1; x <= n; x++)
            {
                if (a[x])
                    s += b[x];
            }
            if (s == k)
            {
                vector<int> v;
                for (int l = 1; l <= n; l++)
                {
                    if (a[l])
                        v.push_back(b[l]);
                }
                res.push_back(v);
            }
        }
        else
            Try(i + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        sort(b + 1, b + 1 + n);
        res.clear();
        Try(1);
        if (res.size() == 0)
            cout << -1;
        else
        {
            sort(res.begin(), res.end());
            for (int i = 0; i < res.size(); i++)
            {
                cout << '[';
                for (int j = 0; j < res[i].size() - 1; j++)
                {
                    cout << res[i][j] << " ";
                }
                cout << res[i][res[i].size() - 1] << "]";
            }
        }
        cout << '\n';
    }
}