#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i= i + (c))
using namespace std;


/* I am gonna be the King of the Pirates */
int mod = 1e9+7;

ll dp[2001][2001];
ll n;
vector<ll> arr;

ll func(ll l , ll r)
{
    if(l<=0 && r> n)
    return 0;

    if(dp[l][r]!=-1)
    return dp[l][r];

    ll x = 1e14;
    ll y = 1e14;
    if(l>0)
    {
        x = func(l-1,r) + arr[r-1] - arr[l];
    }
    if(r<=n)
    {
        y = func(l,r+1) + arr[r] - arr[l+1];
    }

    dp[l][r] = min(x,y);

    return dp[l][r];
}

void solve()
{
     cin>>n;
     arr.resize(n+1);

     for(int i = 0 ; i <= n+1 ;i++)
     for(int j = 0 ; j <= n+1 ;j++)
     {
         dp[i][j] = -1;
     }

     for(int i = 1 ; i <= n ;i++)
     cin>>arr[i];

     sort(arr.begin(),arr.end());
     ll ans = 1e16;

     for(int i = 1 ; i <= n ; i++)
     {
         ll cal = func(i-1,i+1);
         ans = min(ans,cal);
     }
     cout << ans << endl;     
}

int32_t main()
{
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}