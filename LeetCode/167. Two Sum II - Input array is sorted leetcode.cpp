class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        map<int, int> m;
        vector<int> ans;
        int n = numbers.size();

        for (int i = 0; i < n; i++)
        {
            int temp = numbers[i];
            if (m[target - temp])
            {
                ans.push_back(m[target - temp]);
                ans.push_back(i + 1);
                return ans;
            }
            else
            {
                m[temp] = i + 1;
            }
        }

        return ans;
    }
};