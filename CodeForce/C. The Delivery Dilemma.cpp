#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
struct v
{
    ll a, b;
};

bool comp(v a, v b)
{
    if (a.a < b.a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int n;
    cin >> n;

    ll temp = 0;

    v arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].a;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].b;
        temp += arr[i].b;
    }

    sort(arr, arr + n, comp);

    ll ans = 0;
    ans = temp;
    for (int i = 0; i < n; i++)
    {
        temp -= arr[i].b;
        ans = min(ans, max(temp, arr[i].a));
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}