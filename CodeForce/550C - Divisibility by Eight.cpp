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

//stringMul String Multiplication ,  trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */
int n;
int dp[101][999];
int func(string s, int ind, int num)
{
    if (ind >= n)
        return 0;

    int temp = s[ind] - '0';
    int su = num * 10 + temp;

    if (temp % 8 == 0)
        return temp;

    if (num && (num % 8 == 0))
        return num;

    if (su % 8 == 0)
        return su;

    int case1 = func(s, ind + 1, num);

    if (case1)
        return case1;

    if (su < (999 + 1))
    {
        int case2 = func(s, ind + 1, su);

        if (case2)
            return case2;
    }
    return 0;
}

void solve()
{
    string s;
    cin >> s;
    n = s.size();

    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        if (x == 0)
        {
            cout << "YES\n";
            cout << 0 << "\n";
            return;
        }
    }

    int ans = func(s, 0, 0);

    if (ans)
    {
        cout << "YES\n";
        cout << ans << " ";
    }
    else
    {
        cout << "NO\n";
    }
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