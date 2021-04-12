#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
using namespace std;

const int mod = 1e9 + 7;

int dp[10][200001];

int func(int a,int b)
{
    if(b<=0)
    {
        return 1;   
    }
    if(dp[a][b]!=-1)
    {
        return dp[a][b]%mod;
    }
    if(a<9)
    {
        dp[a][b] = func(a+1,b-1)%mod;
        return dp[a][b];
    }else{
        dp[a][b] = (func(0,b-1)%mod + func(1,b-1)%mod)%mod;
        return dp[a][b];
    }
}

void realcode()
{
    ll a,b;
    cin>>a>>b;
    
    ll ans = 0;

    while(a)
    {
        ans += func(a%10,b);
        ans %= mod;
        a/= 10;
    }

    cout << ans <<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    int testcase;
    cin >> testcase;
    memset(dp,-1,sizeof(dp));
    while (testcase--)
    {
        realcode();
    }
    return 0;
}