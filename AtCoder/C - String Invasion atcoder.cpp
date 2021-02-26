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
    ll arr[26];
    for (int i = 0; i < 26; i++)
        arr[i] = 0;

    ll ans = 0;
    arr[s[n - 1] - 'a']++;
    arr[s[n - 2] - 'a']++;
    for (int i = n - 3; i >= 0; i--)
    {
        arr[s[i] - 'a']++;
        if (s[i] == s[i + 1] && (s[i] != s[i + 2]))
        {
            int val = s[i] - 'a';
            for (int j = 0; j < 26; j++)
            {
                if (j == val)
                    continue;
                ans += arr[j];
                arr[val] += arr[j];
                arr[j] = 0;
            }
        }
    }

    cout << ans << endl;
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