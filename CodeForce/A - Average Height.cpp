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
    
    int arr[n];
    
    for(int i = 0 ; i < n ;i++)
    {
        cin>>arr[i];
    }
    
    for(int i = 0 ; i < n ;i++)
    if(arr[i]%2)
    cout << arr[i]<<" ";
    
    for(int i = 0 ; i < n ;i++)
    if(arr[i]%2==0)
    cout << arr[i] << " ";
    
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