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

int mat[501][501];
int n, cnt;

void DFS(int i, int j, int v)
{
    if (mat[i][j] || i < 1 || j < 1 || i > n || j > n || (!cnt))
    {
        return ;
    }

    cnt--;
    mat[i][j] = v;
    DFS(i, i - 1, mat[i][i]);
    DFS(i + 1, i, mat[i][j]);
}

void solve()
{
    cin >> n;



    for (int i = 1 ; i <= n ; i++)
    {
        cin >> mat[i][i];
        cnt = i - 1;

        DFS(i, i - 1, mat[i][i]);
        DFS(i + 1, i, mat[i][j]);
    }



    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}