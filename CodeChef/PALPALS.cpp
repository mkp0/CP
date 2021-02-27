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
    string s;
    cin >> s;
    int n = s.size();

    int arr[26];
    for (int i = 0; i < 26; i++)
        arr[i] = 0;

    for (int i = 0; i < n; i++)
    {
        arr[s[i] - 'a']++;
    }

    int oc = 0;
    int ec = 0;

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2)
        {
            oc++;
        }
        ec += arr[i] / 2;
    }

    if (oc > ec)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}

int32_t main()
{
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