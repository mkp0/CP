class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        
        if(n==0 || n==1)
            return 0;
        int lpos = 0;
        int rpos = n-1;
        bool is = true;
        for(int i = 1;i<n ;i++)
        {
            if(nums[i]<nums[i-1])
            {
                is = false;
                while(lpos>=0 && nums[i]<nums[lpos])
                {
                    lpos--;
                }
            }else if(is){
                lpos++;
            }
        }
        is = true;
        
        for(int i = n-2;i>=0 ;i--)
        {
            if(nums[i]>nums[i+1])
            {
                is = false;
                while(rpos<=(n-1) && nums[i]>nums[rpos])
                {
                    rpos++;
                }
            }else if(is){
                rpos--;
            }
        }
        
        if(lpos>rpos)
        {
            return 0;
        }        
        
        return (rpos-lpos-1);
    }
};