class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        
        bool dp[n][n];
        memset(dp,false,sizeof(dp));
        
        int ans = n;
        
        for(int i = 0;i < n ;i++)
        {
            dp[i][i] = true;
        }
        
        for(int i = 0; i < n-1 ;i++)
        {
            if(s[i]==s[i+1])
            {
                ans++;
                dp[i][i+1] = true;
            }
        }        
        
        for(int j = 2; j < n ;j++)
        {
            for(int i = 0; i < n-j ;i++)
            {
                if(dp[i+1][i+j-1]==true && (s[i]==s[i+j]))
                {
                    dp[i][i+j] = true;
                    ans++;
                }
            }
        }
        
        return ans;
    }
};