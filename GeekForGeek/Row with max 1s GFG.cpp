//User function template for C++
class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {
        int ans = 0;
        int maxi = m - 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = maxi; j >= 0; j--)
            {
                if (arr[i][maxi] == 0)
                {
                    break;
                }
                else
                {
                    ans = i;
                    maxi--;
                }
            }
        }

        if (maxi == (m - 1))
            return -1;

        return ans;
    }
};