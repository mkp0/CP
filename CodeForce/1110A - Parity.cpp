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

void solve()
{
    int b, k;
    cin >> b >> k;
    int arr[k];

    for (int i = 0; i < k; i++)
        cin >> arr[i];

    int ans = arr[k - 1];

    if (b % 2 != 0)
        for (int i = 0; i < k - 1; i++)
        {
            if (arr[i] % 2 != 0)
            {
                ans += 1;
            }
        }

    if (ans % 2)
    {
        cout << "odd" << endl;
    }
    else
    {
        cout << "even\n";
    }
    return;
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}