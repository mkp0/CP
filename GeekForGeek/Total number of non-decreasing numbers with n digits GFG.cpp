class Solution{
public:
    long long dp[501][10];
    
    long long func(int n,int s)
    {
        if(n==0)
        return 1;
        
        if(dp[n][s]!=0)
        return dp[n][s];
        
        
        for(int i = s; i<= 9 ;i++)
        {
            dp[n][s] += func(n-1,i);
        }
        
        return dp[n][s];
    }
    
    long long int count(int N){
        memset(dp,0,sizeof(dp));
        return func(N,0);
    }
};