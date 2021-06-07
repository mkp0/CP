class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0];
        int co = 1;
        
        for(int i = 1; i < nums.size();i++)
        {
            if(nums[i]!=maj)
            {
                co--;
                if(co == 0)
                {
                    maj = nums[i];
                    co = 1;
                }
            }else{
                co++;
            }
        }
        
        return maj;
    }
};