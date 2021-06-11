class Solution
{
public:
    void func(vector<int> &candidates, int pos, int target, vector<int> temp, vector<vector<int>> &ans)
    {
        if (target < 0 || pos >= candidates.size())
            return;
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }
        for (int i = pos; i < candidates.size() && target >= candidates[i]; i++)
        {
            temp.push_back(candidates[i]);
            func(candidates, i, target - candidates[i], temp, ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        func(candidates, 0, target, temp, ans);

        return ans;
    }
};