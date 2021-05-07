#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
#define loop(i, a, b, c) for (int i = (a); i <= (b); i= i + (c))
using namespace std;


/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;
int mat[101][101];
int n, m, k;
bool DFS(int i, int j, int k)
{
    if (i > n || j > m || k < 0)
    {
        return false;
    }
    if (i == n && j == m)
    {
        return k == 0;
    }

    if (mat[i][j] != -1)
        return mat[i][j];

    mat[i][j] = DFS(i + 1, j, k - j) || DFS(i, j + 1, k - i);
    return mat[i][j];
}

void solve()
{
    cin >> n >> m >> k;
    memset(mat, -1, sizeof(mat));

    if (DFS(1, 1, k))
    {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}