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

void solve()
{
    int t;
    cin >> t;

    int s = 0, e = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        pq.push({x, y});
    }

    vector<char> ans;

    for (int i = 0; i < t; i++)
    {
        int x, y;
        x = pq.top().first;
        y = pq.top().second;
        pq.pop();

        if (x >= s && y >= e)
        {
            while (s != x)
            {
                s++;
                ans.push_back('R');
            }
            while (e != y)
            {
                e++;
                ans.push_back('U');
            }
        }
        else
        {

            cout << "NO"
                 << "\n";
            return;
        }
    }

    cout << "YES"
         << "\n";

    for (auto x : ans)
    {
        cout << x;
    }

    cout << "\n";
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