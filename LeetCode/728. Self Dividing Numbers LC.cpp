class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for (int i = left; i <= right; i++)
        {
            int x = i;

            bool is = true;

            while (x)
            {
                if (x % 10 == 0)
                {
                    is = false;
                    break;
                }
                if (i % (x % 10) != 0)
                {
                    is = false;
                    break;
                }
                x /= 10;
            }

            if (is)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};