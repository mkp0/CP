class Solution {
public:
    map<pair<int,int>,int>dp;
     
    int helper(vector<int>& piles,int l,int r)
    {
        if(l>r){
            dp[{l,r}] = 0;
            return dp[{l,r}];
                }
        if(dp.find({l,r})!=dp.end())
            return dp[{l,r}];
        
        if(dp.find({l+2,r})==dp.end())
            dp[{l+2,r}] = helper(piles,l+2,r);
        if(dp.find({l,r-2})==dp.end())
            dp[{l,r-2}] = helper(piles,l,r-2);
        if(dp.find({l+1,r-1})==dp.end())
            dp[{l+1,r-1}] = helper(piles,l+1,r-1);
        
        int tmp1 = piles[l] + min(dp[{l+1,r-1}],dp[{l+2,r}]);
        int tmp2 = piles[r] + min(dp[{l+1,r-1}],dp[{l,r-2}]);
        dp[{l,r}] = max(tmp1,tmp2);
        
        return dp[{l,r}];
    }
    
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int alex = 0,lee = 0;
        for(auto x : piles)
        {
            lee += x;
        }
        alex = helper(piles,0,n-1);
        lee -= alex;
        
        return alex>lee;
    }
};