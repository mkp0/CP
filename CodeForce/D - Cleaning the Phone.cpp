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
    ll n, m;
    cin >> n >> m;

    int arr[n];

    vector<int> one;
    vector<int> two;
    ll sum = 0, ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            one.pb(arr[i]);
        }
        else
        {
            two.pb(arr[i]);
        }
    }

    if (sum < m)
    {
        cout << "-1\n";
        return;
    }
    sum = 0;

    sort(one.begin(), one.end(), greater<int>());
    sort(two.begin(), two.end(), greater<int>());

    int n1 = one.size();
    int n2 = two.size();
    sum = 0;
    for (int i = 0; i < n1; i++)
    {
        sum += one[i];
    }

    ans = INT_MAX;

    int j = 0, i = n1 - 1;

    while (i >= -1)
    {
        while (sum < m && j < n2)
        {
            sum += two[j];
            j++;
        }

        if (sum >= m)
        {
            ans = min(ans, (2 * 1LL * j) + (i + 1));
        }

        if (i == -1)
        {
            break;
        }
        sum -= one[i];
        i--;
    }

    cout << ans << "\n";
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