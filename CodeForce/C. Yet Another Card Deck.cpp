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
{int n;
    cin>>n;
    int q;
    cin>>q;
    
    map<int,int> m;
    
    for(int i = 1 ; i <= n ;i++)
    {
        int x;
        cin>>x;
        if(m.find(x)==m.end())
        {
            m[x] = i;
        }
    }
  
    
    while(q--)
    {
        int x;
        cin>>x;
        int temp = m[x];
        for(auto& [a,b]: m)
        {
            if(b<temp)
            {
                b += 1;
            }
        }
        cout << temp << " ";
        m[x] = 1;
    }
     
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