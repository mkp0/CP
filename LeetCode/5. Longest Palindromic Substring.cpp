class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int maxl = 0;
        int n = s.size();
        if(!n)
            return ans;
        
        maxl = 1;
        ans = s[0];
        
        bool dp[n][n];
        memset(dp,false,sizeof(dp));
        
        for(int i = 0 ; i < n ;i++)
            dp[i][i] = true;
        
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1] = true;
                maxl = 2;
                ans = s.substr(i,2);
            }
        }
        
        for(int k = 2; k < n;k++) // i to i+k
        {
            for(int i = 0; i < n-k ;i++) // i>=n-k string cannot form
            {
                if((s[i]==s[i+k]) && dp[i+1][i+k-1])
                {
                    dp[i][i+k] = true;
                    if(k+1>maxl)
                    {
                        maxl = k+1;
                        ans = s.substr(i,k+1);
                    }                    
                }
            }
        }
        return ans;
    }
};