#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

map<int, ll> m;

ll f(int a)
{
    if (a == 0)
    {
        return 0;
    }
    if (m[a] > 0)
    {
        return m[a];
    }
    ll temp = f(a / 2) + f(a / 3) + f(a / 4);
    if (temp > a)
    {
        m[a] = temp;
    }
    else
    {
        m[a] = a;
    }
    return m[a];
}

int main()
{
    int a;
    while (1)
    {
        cin >> a;
        cout << f(a) << endl;
    }
    return 0;
}