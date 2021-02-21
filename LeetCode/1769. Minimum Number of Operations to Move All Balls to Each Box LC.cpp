class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n);        
        
        int co = 0;
        if(boxes[0] == '1')
            co = 1;
        
        for(int i = 1 ; i < n ;i++)
        {
            ans[i] = ans[i-1] + co;
            if(boxes[i] == '1')
                co++;
        }
        
        co = 0;
        if(boxes[n-1] == '1')
            co = 1;
        
        int dp[n];
        dp[n-1] = 0;
        for(int i = n-2 ; i >= 0 ;i--)
        {
            dp[i] = dp[i+1] + co; 
            ans[i] += dp[i];
            if(boxes[i] == '1')
                co++;
        }
        
        return ans;
    }
};