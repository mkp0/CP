class Solution{
public:
    int sumOfDigits(int N){
        vector<int> dp(N+1);
        for(int i = 1 ; i <= 9 && i <= N ;i++)
        dp[i] = i;
        
        for(int i = 10 ; i <= N ;i++)
        {
            dp[i] = i%10;
            dp[i] += dp[i/10];
        }
        int ans = 0;
        for(int i = 1 ; i <= N ;i++)
        {
            ans += dp[i];
        }
        
        return ans;
    }
};
