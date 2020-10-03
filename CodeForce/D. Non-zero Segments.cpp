#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    map<ll, int> m;
    m[0]++;
    int n, ans = 0;
    ll s = 0;
    cin >> n;
    ll t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s += t;
        if (m.find(s) != m.end())
        {
            ans++;
            m.clear();
            m[t]++;
            m[0]++;
            s = t;
        }
        else
        {
            m[s]++;
        }
    }

    cout << ans << endl;

    return 0;
}