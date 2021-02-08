class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        vector<int> ans;

        int su = 0;

        for (auto x : nums)
        {
            su = su ^ x;
        }

        int sb = 1;

        while (su)
        {
            if (su & 1)
            {
                break;
            }
            else
            {
                sb = sb << 1;
            }
            su = su >> 1;
        }

        int a = 0, b = 0;
        for (auto x : nums)
        {
            if (sb & x)
            {
                a = a ^ x;
            }
            else
            {
                b = b ^ x;
            }
        }

        ans.push_back(a);
        ans.push_back(b);

        sort(ans.begin(), ans.end());

        return ans;
    }
};