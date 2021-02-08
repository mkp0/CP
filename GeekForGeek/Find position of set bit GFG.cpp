class Solution
{
public:
    int findPosition(int n)
    {
        if (!(n && (!(n & (n - 1)))) || n <= 0)
        {
            return -1;
        }
        int co = 0;
        while (n)
        {
            co++;
            n >>= 1;
        }

        return co;
    }
};