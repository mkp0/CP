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

int mod = 1e9 + 7;
ll n;

int mat[101][101];

bool is(int i, int j)
{
    if (i - 1)
    {
        if (abs(mat[i - 1][j] - mat[i][j]) == 1)
        {
            return false;
        }
    }
    if (j - 1)
    {
        if (abs(mat[i][j - 1] - mat[i][j]) == 1)
        {
            return false;
        }
    }
    if (i + 1 <= n)
    {
        if (abs(mat[i + 1][j] - mat[i][j]) == 1)
        {
            return false;
        }
    }
    if (j + 1 <= n)
    {
        if (abs(mat[i][j + 1] - mat[i][j]) == 1)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    cin >> n;
    memset(mat, 0, sizeof(mat));
    int x = 1;
    int y = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (x <= n * n)
            {
                mat[i][j] = x;
                x += 2;
            }
            else
            {
                mat[i][j] = y;
                y += 2;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (!is(i, j))
            {
                cout << "-1\n";
                return;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}