#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> m;
        int ans[n];
        memset(ans, 0, sizeof(ans));
        for (int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            m[temp]++;
        }

        int temp = 0, i = 0;
        for (auto x : m)
        {
            while (x.first > i + 1)
            {
                ans[i] = temp;
                i++;
            }
            temp += x.second;
            ans[i] = temp;
            i++;
            if (i >= n)
            {
                break;
            }
        }

        while (i < n)
        {
            ans[i] = temp;
            i++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}