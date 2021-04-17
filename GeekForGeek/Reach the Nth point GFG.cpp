class Solution{
	public:
		int nthPoint(int n){
		    vector<int> dp(n+1);
		    
		    dp[0] = 1;
		    dp[1] = 1;
		    
		    int mod = 1e9+7;
		    
		    for(int i=2 ;i <= n ;i++)
		    {
		        dp[i] = (dp[i-1] + dp[i-2])%mod;
		    }
		    
		    return dp[n];
		}
};