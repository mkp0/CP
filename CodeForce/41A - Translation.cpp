#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    string c;
    c.resize(n);

    for (int i = n - 1; i >= 0; i--)
    {
        c[n - 1 - i] = a[i];
    }

    if (c == b)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}