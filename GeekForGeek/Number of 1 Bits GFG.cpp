class Solution
{
public:
    int setBits(int N)
    {
        int co = 0;

        while (N)
        {
            if (N & 1)
            {
                co++;
            }
            N = N >> 1;
        }
        return co;
    }
};