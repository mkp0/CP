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
    vector<ll> arr[n+1];
    vector<int> u(n);
    vector<pair<int,int>> pa;

    for(int i = 0 ; i < n ;i++)
    {
        cin>>u[i];
    }

    for(int i = 0 ; i < n ;i++)
    {
        int x;
        cin>>x;
        arr[u[i]].push_back(x);
    }
    
    for(int i = 1 ; i <= n ;i++)
    {
        sort(arr[i].begin(),arr[i].end(),greater<int>());
    }

    for(int  i = 1 ; i <= n ;i++)
    {
        int sz = arr[i].size();
        if(sz)
        {
            pa.push_back({sz,i});
        }
        
        for(int j = 1 ; j < sz ;j++)
        {
            arr[i][j] += arr[i][j-1];
        }
    }

    sort(pa.begin(),pa.end(),greater<pair<int,int>>());
    int flag = 0;
    for(int  k = 1 ; k <= n ;k++)
    {
        ll su = 0;
        if(!flag)
        for(auto [a,b] : pa)
        {
            if(a<k)
            {
                break;
            }
            int sz = arr[b].size();
            sz = sz - sz%k;
            if(sz)
            {
                su += arr[b][sz-1];
            }
        }
        if(su == 0)
        {
            flag = 1;
        }
        cout << su << " ";
    }
    cout << endl;
    
}

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}