class Solution {
public:
    int numSquares(int n) {
        int temp = sqrt(n);
        vector<int> roots;
        
        for(int i = 1; i <= temp ;i++)
            roots.push_back(i*i);
        
        vector<int> dp(n+1,INT_MAX);
        dp[0] = 0;
        
        for(int i = 1; i <= n ;i++)
        {
            for(auto &x : roots)
            {
                if(x>i)break;
                
                dp[i] = min(dp[i],dp[i-x]+1);
            }
        }
        
        return dp[n];
    }
};