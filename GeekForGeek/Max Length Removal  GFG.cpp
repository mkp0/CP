class Solution
{
public:
    int longestNull(string str)
    {
        int n = str.size();
        int forw = 0;
        int store[n];
        for (int i = n - 1; i >= 0; i--)
        {
            store[i] = 0;
            if (str[i] == '0')
            {
                forw++;
            }
            else
            {
                if (forw >= 2)
                {
                    forw -= 2;
                    store[i] = 1;
                }
                else
                {
                    forw = 0;
                }
            }
        }

        int ans = 0;
        int co = 0;

        for (int i = 0; i < n; i++)
        {
            if (co && store[i] == 0)
            {
                store[i] = 1;
                co--;
            }
            else if (store[i] == 1)
            {
                co += 2;
            }
            if (i && store[i])
            {
                store[i] += store[i - 1];
            }

            ans = max(ans, store[i]);
        }

        return ans;
    }
};