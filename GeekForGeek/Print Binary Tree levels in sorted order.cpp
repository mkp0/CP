class Solution
{
public:
    vector<vector<int>> binTreeSortedLevels(int arr[], int n)
    {
        vector<vector<int>> ans;

        int ju = 1;
        int co = 0;
        vector<int> temp;

        for (int i = 0; i < n; i++)
        {
            co++;
            temp.push_back(arr[i]);
            if (co == ju)
            {
                ju *= 2;
                co = 0;
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
                temp.clear();
            }
        }

        if (!temp.empty())
        {
            sort(temp.begin(), temp.end());
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};