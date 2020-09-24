#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        map<int, int> m;
        cin >> n;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            m[temp]++;
        }

        int ans = 0;

        for (auto x : m)
        {
            int temp = x.second;
            ans += temp * (temp - 1) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}