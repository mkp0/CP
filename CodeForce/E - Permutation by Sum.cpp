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
    ll n,l,r,s;
    cin>>n>>l>>r>>s;
    vector<int> arr(n+1);
    map<int,int> m;
    int diff = r-l+1;

    ll mi = 0;
    ll ma = 0;

    for(int i = 1; i <= diff; i++)
    {
        mi += i;
        ma += (n-i+1);
    }
    if(s<mi || s>ma)
    {
        cout << -1 <<endl;
        return;
    }
    
    ll temp = n;
    for(int i = l ; i <= r ;i++)
    {
        arr[i] = min(temp,s - (mi-diff));
        mi -= diff;
        diff--;
        temp--;
        s -= arr[i];
        m[arr[i]]++;
    }
    
    int x = 1;

    for(int i = 1 ; i < l ;i++)
    {
        while(m[x])
        {
            x++;
        }
        arr[i] = x;
        x++;
    }

    for(int i = r+1 ; i <= n ;i++)
    {
        while(m[x])
        {
            x++;
        }
        arr[i] = x;
        x++;
    }

    for(int i = 1 ; i <= n ;i++)
    {
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