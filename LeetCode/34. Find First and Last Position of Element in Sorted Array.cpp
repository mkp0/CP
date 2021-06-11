class Solution {
public:
    
    int find(vector<int>& nums, int target,bool first = false)
    {
        int ans = -1;
        int left = 0;
        int right = nums.size()-1;
        
        while(right>=left)
        {
            int mi = (right+left)/2;
            if(nums[mi]==target)
            {
                ans = mi;
                if(first)
                    right = mi-1;
                else 
                    left = mi+1;
            }else if(nums[mi]>target)
            {
                right = mi-1;
            }else{
                left = mi+1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        ans.push_back(find(nums,target,true));// first occurence
        ans.push_back(find(nums,target)); // last occurenece
        
        return ans;
    }
};