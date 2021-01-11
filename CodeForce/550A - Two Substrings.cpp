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
    string s;
    cin >> s;

    int n = s.size();
    int arr[n] = {0};

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' && i + 1 < n && s[i + 1] == 'B')
        {
            arr[i] = 1;
        }
        if (s[i] == 'B' && i + 1 < n && s[i + 1] == 'A')
        {
            arr[i] = 2;
        }
    }

    int one = 0;
    int two = 0;
    int cons = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            one++;
            if (i + 1 < n && arr[i + 1] == 2)
            {
                cons++;
            }
        }
        else if (arr[i] == 2)
        {
            two++;
            if (i + 1 && arr[i + 1] == 1)
            {
                cons++;
            }
        }
    }

    if (cons == 1 && one == 1 && two == 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (cons == 2 && one + two == 3)
    {
        cout << "NO" << endl;
        return;
    }
    if (one && two)
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}