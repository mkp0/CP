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

// trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    pair<int, double> op[m];
    for (int i = 0; i < m; i++)
    {
        cin >> op[i].first >> op[i].second;
    }

    bool isCorrectPos[n + 1] = {0};

    isCorrectPos[n] = true;

    for (int i = n; i >= 1; i--)
    {
        if (arr[i] == i)
        {
            isCorrectPos[i] = true;
            isCorrectPos[i - 1] = true;
        }
        else
        {
            break;
        }
    }

    if (isCorrectPos[1])
    {
        printf("%.6lf\n", 1.0);
        return;
    }

    sort(op, op + m);

    double ans = 0;

    double failure = 1;

    for (int i = 0; i < m; i++)
    {
        if (isCorrectPos[op[i].first])
        {
            ans += (failure * op[i].second);
            failure *= (1 - op[i].second);
        }
    }

    printf("%.6lf\n", ans);
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