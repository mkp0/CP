class Solution
{
public:
    bool balancedNumber(string N)
    {
        int n = N.size();
        int left = 0;
        int right = 0;
        int center = 0;

        for (int i = 0; i < n; i++)
        {
            if (i < n / 2)
            {
                left += (N[i] - '0');
            }
            else if (i == n / 2)
            {
                center += (N[i] - '0');
            }
            else
            {
                right += (N[i] - '0');
            }
        }

        if (left == right)
        {
            return true;
        }
        return false;
    }
};