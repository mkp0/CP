#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n % 2 == 0)
    {
        cout << n / 2 - 1 << endl;
    }
    else
    {
        cout << n / 2 << endl;
    }

    sort(a, a + n);
    int e = n / 2, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << a[e] << " ";
            e++;
        }
        else
        {
            cout << a[o] << " ";
            o++;
        }
    }
    return 0;
}