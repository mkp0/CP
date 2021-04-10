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

     char arr[n+1][n+1];

     pair<int,int> a,b;
     a.first = 0;
     a.second = 0;

     for(int i= 1; i <= n ; i++)
     {
         for(int j = 1 ; j <= n ; j++)
         {
             cin>>arr[i][j];
             if(arr[i][j] == '*' && (!a.first))
             {
                 a = {i,j};
             }else if(arr[i][j]=='*')
             {
                 b = {i,j};
             }
         }
     }

    if((a.first != b.first) && (a.second!=b.second))
    {
        arr[a.first][b.second] = '*';
        arr[b.first][a.second] = '*';
    }else if(a.first == b.first)
    {
        if(a.first == n)
        {
            arr[a.first-1][a.second] = '*';
            arr[b.first-1][b.second] = '*';
        }else{
            arr[a.first+1][a.second] = '*';
            arr[b.first+1][b.second] = '*';
        }
    }else{
        if(a.second == n)
        {
            arr[a.first][a.second-1] = '*';
            arr[b.first][b.second-1] = '*';
        }else{
            arr[a.first][a.second +1] = '*';
            arr[b.first][b.second+1] = '*';
        }
    }

    for(int i= 1 ; i <= n ;i++)
    {
        for(int j = 1  ; j <= n ;j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}