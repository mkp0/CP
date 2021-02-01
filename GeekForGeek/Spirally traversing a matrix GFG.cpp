class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int>> arr, int d, int r)
    {

        vector<int> ans;
        int l = 0, t = 0;
        int pos = 0;
        while (1)
        {
            int co = 0;

            if (pos == 0)
            {
                for (int i = l; i < r; i++)
                {
                    co++;
                    ans.push_back(arr[t][i]);
                }
                t++;
            }
            else if (pos == 1)
            {
                for (int i = t; i < d; i++)
                {
                    co++;
                    ans.push_back(arr[i][r - 1]);
                }
                r--;
            }
            else if (pos == 2)
            {
                for (int i = r - 1; i >= l; i--)
                {
                    co++;
                    ans.push_back(arr[d - 1][i]);
                }
                d--;
            }
            else
            {
                for (int i = d - 1; i >= t; i--)
                {
                    co++;
                    ans.push_back(arr[i][l]);
                }
                l++;
            }
            pos = (pos + 1) % 4;
            if (co == 0)
            {
                return ans;
            }
        }

        return ans;
    }
};