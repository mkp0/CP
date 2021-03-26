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

//kadans algo

int ka(int row[], int st, int ed)
{
    int su = 0;
    int ans = INT_MIN;
    for (int i = st; i < ed; i++)
    {
        su += row[i];
        if (su < 0)
        {
            su = 0;
        }
        ans = max(ans, su);
    }
    return ans;
}

void solve()
{
    int r, c;
    cin >> r >> c;
    int mat[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }

    int ans = 0;

    for (int i = 0; i < c; i++)
    {
        int row[r];
        memset(row, 0, sizeof(row));
        for (int j = i; j < c; j++)
        {
            for (int k = 0; k < r; k++)
            {
                row[k] += mat[k][j];
            }
            // kadan's algo
            ans = max(ans, ka(row, 0, r));
        }
    }

    cout << ans << "\n";
}

int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}