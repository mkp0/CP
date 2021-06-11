// native approce
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());

        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int ct = 1;
            while (i + 1 < nums.size() && (nums[i + 1] - nums[i] <= 1))
            {
                if (nums[i + 1] - nums[i] == 0)
                {
                    i++;
                    continue;
                };
                i++;
                ct++;
            }

            ans = max(ans, ct);
        }

        return ans;
    }
};

// O(n) approche

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int ans = 0;

        unordered_set<int> s(begin(nums), end(nums));

        for (int &x : nums)
        {
            if (s.count(x - 1))
                continue;

            int ct = 1;
            while (s.count(x + ct))
                ct++;
            ans = max(ans, ct);
        }

        return ans;
    }
};