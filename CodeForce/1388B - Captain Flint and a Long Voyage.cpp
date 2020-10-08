#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;

        int e = ceil(l / 4.0);

        while (l > e)
        {
            cout << 9;
            l--;
        }
        for (int i = 1; i <= e; i++)
        {
            cout << 8;
        }
        cout << endl;
    }
    return 0;
}