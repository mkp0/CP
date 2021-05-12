class Solution{

	public:

	
	int minCoins(int coins[], int M, int V) 
	{ 
	    int dp[V+1];
	    
	    for(int i = 0 ; i <= V ; i++)
	    dp[i] = INT_MAX;
	    
	    dp[0] = 0;
	    for(int i= 1 ; i <= V ;i++)
	    {
	        for(int j = 0;j< M ;j++)
	        {
	            if(coins[j]<=i)
	            {
	                if(dp[i-coins[j]]!=INT_MAX)
	                dp[i] = min(dp[i],1+dp[i-coins[j]]);
	            }
	        }
	    }
	    
	    if(dp[V]==INT_MAX)
	    return -1;
	    
	    
	    return dp[V];
	} 
	  
};