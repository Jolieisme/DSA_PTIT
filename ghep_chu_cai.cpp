#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(char c)
{
    return (c == 'A' || c == 'E');
}

bool check2(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (check(s[i]))
        {
            if (i == 0 || i == s.size() - 1)
                continue;
            if (!check(s[i - 1]) && !check(s[i + 1]))
                return 0;
        }
    }
    return 1;
}

int main()
{   
    char x;
    cin >> x;
    string s = "ABC";
    for (char k = 'D'; k <= x; k++)
        s += k;
    do
    {
        if (check2(s))
            cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));
}