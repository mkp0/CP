#include <bits/stdc++.h>

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
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;

vector<bool> is;
vector<int> ans;
vector<int> arr;

int n;

void left(int ind, int level)
{
    int maxsi = -1;
    int maxv = -1;
    int i = ind;
    i--;
    while (1)
    {
        if (i < 0 || is[i])
        {
            break;
        }

        if (arr[i] > maxv)
        {
            maxv = arr[i];
            maxsi = i;
        }
        i--;
    }

    if (maxsi >= 0)
    {
        ans[maxsi] = level + 1;
        is[maxsi] = true;
        left(maxsi, level + 1);
    }

    i = ind;
    maxv = -1;
    maxsi = -1;
    i++;
    while (1)
    {
        if (i >= n || is[i])
        {
            break;
        }
        if (arr[i] > maxv)
        {
            maxv = arr[i];
            maxsi = i;
        }
        i++;
    }

    if (maxsi >= 0)
    {
        ans[maxsi] = level + 1;
        is[maxsi] = true;
        left(maxsi, level + 1);
    }
}

void solve()
{
    cin >> n;
    is.resize(n, false);
    ans.resize(n, -1);
    arr.resize(n, 0);

    int maxi = -1;

    for (int i = 0; i < n; i++)
    {
        is[i] = 0;
        cin >> arr[i];
        if (arr[i] == n)
        {
            maxi = i;
        }
    }

    ans[maxi] = 0;
    is[maxi] = true;
    left(maxi, 0);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}