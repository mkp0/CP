#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll maxV(ll a1, ll a2, ll a3, ll b1, ll b2, ll b3)
{
    ll ans = 0, temp;
    ans += min(a1, b2);
    temp = min(a1, b2);
    a1 -= temp;
    b2 -= temp;

    ans += min(a2, b3);
    temp = min(a2, b3);
    a2 -= temp;
    b3 -= temp;

    ans += min(a3, b1);
    temp = min(a3, b1);
    a3 -= temp;
    b1 -= temp;
    return ans;
}

ll minV(ll a1, ll a2, ll a3, ll b1, ll b2, ll b3)
{
    ll ans = 0, temp;
    temp = min(a1, b1);
    a1 -= temp;

    temp = min(a2, b2);
    a2 -= temp;

    temp = min(a3, b3);
    a3 -= temp;

    temp = min(a1, b3);
    a1 -= temp;

    temp = min(a2, b1);
    a2 -= temp;

    temp = min(a3, b2);
    a3 -= temp;

    return a1 + a2 + a3;
}

int main()
{
    ll n;
    cin >> n;
    ll a1, a2, a3;
    ll b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;

    cout << minV(a1, a2, a3, b1, b2, b3) << " " << maxV(a1, a2, a3, b1, b2, b3) << endl;
    return 0;
}