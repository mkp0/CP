class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int st = 0;
        int ed = nums.size() - 1;

        while (ed > st)
        {
            int mi = (st + ed) / 2;

            if (nums[mi] == target)
            {
                return mi;
            }
            else if (nums[mi] > target)
            {
                ed = mi - 1;
            }
            else
            {
                st = mi + 1;
            }
        }

        if (nums[st] == target)
        {
            return st;
        }

        return -1;
    }
};