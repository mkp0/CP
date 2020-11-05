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
#define F first
#define S second
#define loop(i, a, b, c) for (int i = (a); i <= (b); i += (c))
#define MOD 1e9 + 7
using namespace std;
template <typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

// BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    if (k == 1 && st.size() > 1)
    {
        cout << -1 << endl;
    }
    else if (k == 1 && st.size() == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        int ans = 1;
        for (int i = k; i < st.size();)
        {
            ans++;
            i += (k - 1);
        }
        cout << ans << endl;
    }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}