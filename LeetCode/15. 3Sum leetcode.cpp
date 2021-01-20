class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        int front, back, target, sum;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            target = -nums[i];
            front = i + 1;
            back = nums.size() - 1;
            while (front < back)
            {
                sum = nums[front] + nums[back];
                if (sum > target)
                {
                    back--;
                }
                else if (sum < target)
                {
                    front++;
                }
                else
                {
                    vector<int> in(3, 0);
                    in[0] = nums[i];
                    in[1] = nums[front];
                    in[2] = nums[back];
                    res.push_back(in);
                    while (front < back && nums[front] == in[1])
                        front++;
                    while (front < back && nums[back] == in[2])
                        back--;
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i])
                i++;
        }
        return res;
    }
};