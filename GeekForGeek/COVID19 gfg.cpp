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

int mat[101][101];
int n,m;


void DFS(int i, int j,int val)
{
    if(i>=n || i< 0 || j<0 || j>=m)
    {
        return;
    }
    if(mat[i][j] < (val))
    {
        return;
    }
    mat[i][j] = val;
    DFS(i+1,j,val+1);
    DFS(i-1,j,val+1);
    DFS(i,j-1,val+1);
    DFS(i,j+1,val+1);
}

void solve()
{   
    cin>>n>>m;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {            
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                mat[i][j]= 200;
            }
        }
    }
    bool flag = false;
    for(int i =  0;  i < n ; i++)
    {
        for(int j =  0 ; j < m ; j++)
        {
            if(mat[i][j]==0)
            {
                flag = true;
                DFS(i+1,j,1);
                DFS(i-1,j,1);
                DFS(i,j-1,1);
                DFS(i,j+1,1);
            }
        }        
    }
    int ans = INT_MIN;
    for(int i =  0;  i < n ; i++)
    {
        for(int j =  0 ; j < m ; j++)
        {
            ans = max(ans,mat[i][j]);
        }
    }
    if(!flag)
    ans = -1;
    cout << ans <<endl;
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