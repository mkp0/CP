#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maj = -1, co = 0;

    for (int i = 0; i < n; i++)
    {
        if (co == 0)
        {
            maj = arr[i];
            co++;
        }
        else
        {
            if (arr[i] == maj)
            {
                co++;
            }
            else
            {
                co--;
            }
            if (co == 0)
            {
                maj = -1;
            }
        }
    }

    co = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maj)
        {
            co++;
        }
    }
    if (co > n / 2)
    {
        cout << maj << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}