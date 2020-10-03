#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, u;
        cin >> n >> u;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<long long, int> c;
        map<long long, int> d;

        int c1 = 0, c2 = 0;

        for (int i = 0; i < n; i++)
        {
            int cf = (c.find(u - a[i]) != c.end());
            int df = (d.find(u - a[i]) != d.end());
            if (cf && df)
            {
                if (c[u - a[i]] >= d[u - a[i]])
                {
                    d[a[i]]++;
                    a[i] = 0;
                }
                else
                {
                    c[a[i]]++;
                    a[i] = 1;
                }
            }
            else if (cf)
            {
                d[a[i]]++;
                a[i] = 0;
            }
            else
            {
                c[a[i]]++;
                a[i] = 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}