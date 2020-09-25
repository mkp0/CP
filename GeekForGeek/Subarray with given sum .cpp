#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s, ans = 0;
        bool T = false;
        cin >> n;
        cin >> s;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        queue<ll> q;
        for (int i = 0; i < n; i++)
        {
            if (ans < s)
            {
                ans += arr[i];
                q.push(i);
            }

            if (ans > s)
            {
                while (ans > s && !q.empty())
                {
                    ans -= arr[q.front()];
                    q.pop();
                }
            }

            if (ans == s)
            {
                cout << q.front() + 1 << " " << q.back() + 1 << endl;
                T = true;
                break;
            }
        }
        if (!T)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}