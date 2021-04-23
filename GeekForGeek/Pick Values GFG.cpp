class Solution{   
public:
    int pickValues(int arr[], int n) {
        vector<int> dp(n+1);
        int mi = INT_MAX;
        for(int i = 0 ; i < 4 && i<n ;i++)
        mi = min(mi,arr[i]);
        
        if(n<=4)
        return mi;
        
        
        //here we gonna use dp baby
        
        for(int i = 4; i <= n ;i++)
        {
            dp[i] = INT_MAX;
            for(int j = i-4 ; j < i ; j++)
            {
                dp[i] = min(dp[i],arr[j]+dp[j]);
            }
        }
        
        return dp[n];
        
    }
};