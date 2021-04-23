class Solution{

	public:
	
	int getMaxWeight(string s) 
	{ 
	    // state index  of 's'
	    
	    int n = s.size();
	    vector<int> dp(n+1);
	    // if one char then 1 is ans obviosly
	    // else if we either go two back or one back(see two params in max)
	    
	   // rest you can understand if you have common sence unlike me
	    
	    dp[1] = 1;
	    for(int  i = 2 ; i <= n ;i++)
	    {
	        if(s[i-1]==s[i-2])
	        {
	            dp[i] = max(1+dp[i-1],dp[i-2]+3);
	        }else
	        {
	            dp[i] = max(1+dp[i-1],dp[i-2]+4);
	        }
	    }
	    
	    return dp[n];
	} 
	
};
	