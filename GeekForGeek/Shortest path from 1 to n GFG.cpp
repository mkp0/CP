class Solution
{
public:
    int minimumStep(int n)
    {
        int ans = 0;

        while (n != 1)
        {
            if (n % 3 == 0)
            {
                n = n / 3;
                ans++;
            }
            else
            {
                if (n > 3)
                {
                    ans += n % 3;
                    n -= n % 3;
                }
                else
                {
                    ans += n - 1;
                    n = n - 1;
                }
            }
        }

        return ans;
    }
};