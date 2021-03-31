#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define pi (3.141592653589)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define S second
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */

int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);

    vector<bool> vis(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        vis[arr[i]] = true;
    }

    int pt = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            while (vis[pt])
            {
                pt++;
            }
            cout << pt << " ";
            pt++;
        }
        else
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    pt = arr[1];

    stack<int> s;

    for (int i = 1; i <= n; i++)
    {
        pt = arr[i] - 1;

        stack<int> temp;
        while (!vis[pt] && pt)
        {
            vis[pt] = true;
            temp.push(pt);
            pt--;
        }
        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        if (arr[i] == arr[i - 1])
        {
            cout << s.top() << " ";
            s.pop();
        }
        else
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}