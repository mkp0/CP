// two loop multiplication

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 1);
        int val = 1;

        for (int i = 0; i < n; i++) // mul from all elements from begining
        {
            ans[i] *= val;
            val *= nums[i];
        }

        val = 1;
        for (int i = n - 1; i >= 0; i--) // mul from all elements from ending
        {
            ans[i] *= val;
            val *= nums[i];
        }

        return ans;
    }
};

// one loop multiplication

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 1);
        int valb = 1, vale = 1;

        for (int i = 0; i < n; i++)
        {
            ans[i] *= valb;
            valb *= nums[i];
            ans[n - 1 - i] *= vale;
            vale *= nums[n - 1 - i];
        }

        return ans;
    }
};