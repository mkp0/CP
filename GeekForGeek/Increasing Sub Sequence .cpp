#include <bits/stdc++.h>

using namespace std;

int f(string s)
{
    int n = s.size(), ans = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        int t1 = s[i] - '0';
        for (int j = 0; j < i; j++)
        {
            int t2 = s[j] - '0';
            if (t1 > t2)
            {
                if (a[i] < a[j] + 1)
                {
                    a[i] = a[j] + 1;
                }
            }
        }
        ans = max(a[i], ans);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << f(s) << endl;
    }
    return 0;
}