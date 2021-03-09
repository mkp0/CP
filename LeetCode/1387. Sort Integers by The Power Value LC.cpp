class Solution {
public:
    
    int power(int x)
    {
        if(x==1)
        {
            return 0;
        }
        
        if(x%2)
        {
            x = power(3 * x + 1) + 1;
        }else{
            x = power(x/2) + 1;
        }
        
        return x;
    }
    
    int getKth(int lo, int hi, int k) {
        
        vector<pair<int,int>> ans;
        for(int i = lo ; i <= hi ;i++)
        {
            ans.push_back({power(i),i});
        }
        sort(ans.begin(),ans.end());
        return ans[k-1].second;
    }
};