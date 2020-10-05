#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, y;
        bool t = false;
        cin >> n >> k >> x >> y;
        for (int i = 0; i < n; i++)
        {
            if (x == y)
            {
                t = true;
                break;
            }
            x += k;
            x = x % n;
        }
        if (t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}