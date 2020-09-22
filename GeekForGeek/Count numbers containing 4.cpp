class Solution
{
public:
    int memo[100000];

    int countNumberswith4(int N)
    {
        memset(memo, 0, sizeof(memo));

        for (int i = 1; i <= N; i++)
        {
            memo[i] = memo[i - 1];
            int temp = i;
            while (temp)
            {
                if (temp % 10 == 4)
                {
                    memo[i]++;
                    break;
                }
                temp /= 10;
            }
        }
        return memo[N];
    }
};