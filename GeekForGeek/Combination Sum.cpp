class Solution
{
public:
    //Function to return a list of indexes denoting the required
    //combinations whose sum is equal to given number.

    void dfs(vector<int> &A, int B, vector<vector<int>> &ans, vector<int> &temp, int i)
    {
        if (i < 0)
            return;

        if (B < 0)
            return;

        if (B == 0)
        {
            ans.push_back(temp);
            return;
        }

        if (i - 1 >= 0 && A[i - 1] == A[i])
        {
            dfs(A, B, ans, temp, i - 1);
            return;
        }

        temp.push_back(A[i]);
        dfs(A, B - A[i], ans, temp, i);
        temp.pop_back();
        dfs(A, B, ans, temp, i - 1);
    }

    vector<vector<int>> combinationSum(vector<int> &A, int B)
    {
        vector<vector<int>> ans;

        vector<int> temp;

        sort(A.begin(), A.end(), greater<int>());
        dfs(A, B, ans, temp, A.size() - 1);

        return ans;
    }
};