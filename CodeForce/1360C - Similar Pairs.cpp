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
    int n;
    cin >> n;
    vi arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    sort(arr.begin(), arr.end());

    int odd = 0, even = 0;
    if (arr[0] % 2)
    {
        odd++;
    }
    else
    {
        even++;
    }

    int co1 = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == (arr[i - 1] + 1))
        {
            co1++;
            // cout << i << " ";
            if (arr[i - 1] % 2)
            {
                odd--;
            }
            else
            {
                even--;
            }
            i++;
            if (i >= n)
            {
                break;
            }
            if (arr[i] % 2)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        else
        {
            if (arr[i] % 2)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
    }

    // cout << even << " " << odd << " ";
    if ((odd % 2 == 0) && (even % 2 == 0))
    {
        cout << "YES" << endl;
    }
    else if ((odd % 2 == 1) && (even % 2 == 1) && co1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}