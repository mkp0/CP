#include <bits/stdc++.h>

#define ll long long
#define pi (3.141592653589)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mini(a, b, c) min(c, min(a, b))
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define MOD 1e9 + 7
using namespace std;
template <typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

void solve()
{
    ll num, temp, ans = 0;
    cin >> num;
    temp = num;
    ll no3 = 0, no2 = 0;

    //No of three
    while (num % 3 == 0)
    {
        no3++;
        num /= 3;
    }

    //No of three
    while (num % 2 == 0)
    {
        no2++;
        num /= 2;
    }
    num = temp;
    //-1
    temp = pow(3, no3) * pow(2, no2);
    if (temp != num || no2 > no3)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << no3 - no2 + no3 << endl;
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