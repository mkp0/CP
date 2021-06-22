/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *construct(vector<int> &nums, int st, int ed)
    {
        if (st > ed)
            return nullptr;
        int maxi = st;

        for (int i = st; i <= ed; i++)
        {
            if (nums[maxi] < nums[i])
            {
                maxi = i;
            }
        }

        TreeNode *head = new TreeNode(nums[maxi]);
        head->left = construct(nums, st, maxi - 1);
        head->right = construct(nums, maxi + 1, ed);

        return head;
    }

    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        return construct(nums, 0, nums.size() - 1);
    }
};