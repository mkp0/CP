/*You are requried to complete this method */
int max_Books(int a[], int n, int k)
{
    vector<int> dp(n+1,0);
    
    int ans = 0;
    
    for(int i = 0; i < n ;i++)
    {
        if(a[i]<=k)
        {
            dp[i+1]= a[i] +  dp[i];
            dp[i] = 0;
        }
    }
    
    for(int i = 1 ; i <= n ;i++)
    {
        ans = max(dp[i],ans);
    }
    return ans;
}