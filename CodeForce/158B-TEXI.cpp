#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, ans = 0;
    cin >> t;
    map<int, int> m;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        m[temp]++;
    }

    ans += m[4] + m[3] + m[2] / 2;
    m[2] = m[2] % 2;
    m[1] -= m[3];
    if (m[1] >= 0)
    {
        ans += ceil((m[1] + m[2] * 2) / 4.0);
        cout << ans;
        return 0;
    }
    if (m[2] > 0)
    {
        ans++;
    }

    cout << ans;
    return 0;
}