class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 0)
            return NULL;

        return insertN(nums, 0, n - 1);
    }

    TreeNode *insertN(vector<int> &nums, int st, int ed)
    {
        if (st > ed)
        {
            return NULL;
        }
        int mi = (st + ed) / 2;

        TreeNode *temp = new TreeNode(nums[mi]);

        temp->left = insertN(nums, st, mi - 1);
        temp->right = insertN(nums, mi + 1, ed);

        return temp;
    }
};