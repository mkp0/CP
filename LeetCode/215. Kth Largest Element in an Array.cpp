class Solution {
public:
    
    int partition(vector<int>& nums,int st,int ed)
    {
        int mi = (st+ed)/2;
        
        swap(nums[mi],nums[ed]);
        int t = st;
        
        for(int i = st ;i < ed ;i++)
        {
            if(nums[i]< nums[ed])
            {
                swap(nums[i],nums[t++]);
            }
        }
        
        swap(nums[t],nums[ed]);
        
        return t;
    }
    
    // quick select
    int findKthLargest(vector<int>& nums, int k) {
        int st = 0;
        int ed = nums.size()-1;
        
        while(ed>=st)
        {
            int idx = partition(nums,st,ed);
            // nums.size() - k is the kthLargest element 
            if(idx == (nums.size()-k))
            {
                return nums[idx];
            }
            if(idx>(nums.size()-k))
            {
                ed = idx-1;
            }else{
                st = idx+1;
            }
        }
        
        return -1;
    }
};