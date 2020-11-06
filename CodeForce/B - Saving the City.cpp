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
#define MOD 1e9 + 7
using namespace std;

// BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */
int a, b;
void solve()
{
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            int co = 0;
            while (i < n && s[i] == '0')
            {
                co--;
                i++;
            }
            v.push_back(co);
        }
        else
        {
            int co = 0;
            while (i < n && s[i] == '1')
            {
                co++;
                i++;
            }
            v.push_back(co);
        }
        i--;
    }

    n = v.size();
    int st = 1;
    int ed = n - 1;
    if (v[0] < 0)
    {
        st = 2;
    }

    if (n == 1 && v[0] < 0)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 1 && v[0] > 0)
    {
        cout << a << endl;
        return;
    }

    if (v[n - 1] < 0)
    {
        ed = n - 2;
    }

    int ans = a;

    for (int i = st; i <= ed; i += 2)
    {
        int val1 = abs(v[i]) * b;
        if (val1 > a)
        {
            ans += a;
        }
        else
        {
            ans += val1;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}