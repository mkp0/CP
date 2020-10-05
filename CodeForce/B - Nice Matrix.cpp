#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, n;
        ll ans = 0;
        cin >> m >> n;
        ll mat[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                vector<ll> v;
                v.push_back(mat[i][j]);
                v.push_back(mat[m - 1 - i][j]);
                v.push_back(mat[i][n - 1 - j]);
                sort(v.begin(), v.end());
                mat[i][j] = mat[m - 1 - i][j] = mat[i][n - 1 - j] = v[1];
                for (auto x : v)
                {
                    ans += abs(v[1] - x);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}