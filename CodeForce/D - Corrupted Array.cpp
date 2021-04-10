#include<bits/stdc++.h>

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
    vector<ll> arr(n+3);

    ll su = 0;
    for(int i = 1 ; i <= n+2 ;i++)
    {
        cin>>arr[i];
        su+=arr[i];
    }
    sort(arr.begin(), arr.end());

    su -= arr[n+2];
    su -= arr[n+1];

    if((su == arr[n+1]) || (su==arr[n+2]))
    {
        for(int i = 1 ; i <= n ;i++)
        {
            cout << arr[i]<< " ";
        }
        cout <<endl;
        return;
    }
    int ni = 0;
    for(int i = 1; i <= n ;i++)
    {
        ll diff = arr[n+1] - arr[i];
        su += diff;
        if(su == arr[n+2])
        {
            ni = i;
        }
        su -= diff;
    }
    if(ni == 0){
    cout << -1 <<endl;
    return;
    }

    for(int i = 1 ; i <= n+1 ; i++)
    {
        if(i == ni)
        {
            continue;
        }
        cout << arr[i] << " ";
    }

    cout << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}