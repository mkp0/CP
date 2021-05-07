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
     vll a(n),b(n);

     for(auto &x : a)
     cin>>x;

     for(auto &x : b)
     cin>>x;
    
     ll su = 0;
     for(int i = 0 ; i < n ;i++)
     {
         su += a[i]*b[i];
     }
     
     ll ans = su;
     for(int i = 0 ; i< n ;i++)
     {
         ll temp = su;

         int l = i-1 , r = i+1;
         while(l>=0 && r <n)
         {
             temp -= a[l]*b[l];
             temp -= a[r]*b[r];
             temp += a[l]*b[r];
             temp += a[r]*b[l];
             l--;
             r++;
             ans = max(ans,temp);
         } 
     }

     for(int i = 0 ; i< n ;i++)
     {
         ll temp = su;

         int l = i , r = i+1;
         while(l>=0 && r <n)
         {
             temp -= a[l]*b[l];
             temp -= a[r]*b[r];
             temp += a[l]*b[r];
             temp += a[r]*b[l];
             l--;
             r++;
             ans = max(ans,temp);
         } 
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