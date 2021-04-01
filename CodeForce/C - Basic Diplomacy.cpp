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

bool comp(vector<int> a, vector<int> b)
{
    if (a.size() < b.size())
    {
        return true;
    }
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr[m];
    map<int, int> ma;

    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        arr[i].push_back(i);
        for (int j = 0; j < k; j++)
        {
            int temp;
            cin >> temp;
            arr[i].push_back(temp);
        }
    }
    sort(arr, arr + m, comp);
    vector<int> ans(m);

    for (int i = 0; i < m; i++)
    {
        bool is = false;
        int temp = 1;
        for (auto x : arr[i])
        {
            if (temp)
            {
                temp--;
                continue;
            }
            if (ma[x] < (m + 1) / 2)
            {
                ma[x]++;
                ans[arr[i][0]] = x;
                is = true;
                break;
            }
        }
        if (!is)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}