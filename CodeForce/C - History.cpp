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


void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);

    for(auto &[a,b] : arr)
    {
        cin>>a>>b;
    }

    sort(arr.begin(),arr.end());

    int ans = 0;
    int maxi  =  0;
    for(auto &[a,b] : arr)
    {
        if(b<maxi)
        {
            ans++;
        }
        maxi = max(maxi, b);
    }

    cout << ans << endl;
    
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}