class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        deque<int> buffer;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            while ((!buffer.empty()) && (nums[buffer.back()] < nums[i]))
                buffer.pop_back();

            buffer.push_back(i);

            if (i >= k - 1)
                ans.push_back(nums[buffer.front()]);
            if ((i + 1 - buffer.front()) >= k)
                buffer.pop_front();
        }

        return ans;
    }
};