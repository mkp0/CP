#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int su = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        su += x;
    }

    if (su == 1 || (su % 2 == 0 && su / 2 == (n - 1)))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}