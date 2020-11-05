#include <bits/stdc++.h>

#define ll long long
#define pi (3.141592653589)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define MOD 1e9 + 7
using namespace std;
template <typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;
bool prime[1000];

void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

/* I am gonna be the King of the Pirates */

void solve()
{
    int n;
    cin >> n;
    int nextPrime;
    for (int i = n + 8; i <= 1000; i++)
    {
        if (prime[i])
        {
            nextPrime = i;
            break;
        }
    }

    int arr[n][n];
    REP(i, 0, n)
    {
        REP(j, 0, n)
        {
            arr[i][j] = 1;
        }
    }
    if (prime[nextPrime - n + 1])
    {
        REP(i, 0, n)
        {
            arr[i][(i + 1) % n] += 3;
            arr[i][i] -= 3;
        }
    }

    REP(i, 0, n)
    {
        arr[i][i] += nextPrime - n;
    }

    REP(i, 0, n)
    {
        REP(j, 0, n)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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
    SieveOfEratosthenes(1000);
    while (t--)
    {
        solve();
    }
}