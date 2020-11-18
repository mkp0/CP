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

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            cout << arr[i] << " ";
            sum += arr[i];
        }
        else if (arr[i] == -1 && i == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << sum / i << " ";
            sum = sum + (sum / i);
        }
    }

    cout << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}