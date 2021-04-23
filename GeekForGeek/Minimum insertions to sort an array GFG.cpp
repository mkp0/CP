class Solution{
		

	public:
	int minInsertions(int arr[], int n) 
	{ 
	    vector<int> dp(n,1);
	    
	    int ans = 1;
	    // dp question based on the longest incresing subsequence 
	    // simple classical based questions
	    for(int i = 1; i < n ;i++)
	    {
	        for(int j = 0 ; j < i ; j++)
	        {
	            if(arr[j]<=arr[i])
	            {
	                dp[i] = max(dp[j]+1,dp[i]);
	            }
	        }
	        ans = max(ans,dp[i]);
	    }
	    
        return n-ans;
	} 
};