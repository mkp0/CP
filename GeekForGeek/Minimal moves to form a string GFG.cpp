class Solution{
public:	
	
	int minSteps(string s)
	{
	    int n = s.size();
	    
	    vector<int> dp(n+1,INT_MAX);
	    
	    dp[0] = 0;
	    
	    for(int i = 1 ; i <= n ;i++)
	    {
	        dp[i] = min(dp[i],dp[i-1] + 1);
	    
	        string t = s.substr(0,i);
	        string t1 = s.substr(i,i);
	        
	        if(t==t1)
	        {
	            dp[2*i] = dp[i] + 1; 
	        }
	    }
	    
	    return dp[n];
	}
};