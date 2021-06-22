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
    bool isleaf(TreeNode *root)
    {
        if (!root)
            return false;
        if (!root->left && !root->right)
            return true;

        return false;
    }

    int ans;

    int find(TreeNode *root)
    {
        if (isleaf(root))
        {
            ans = max(ans, root->val);
            return root->val;
        }

        int l = -1e9;
        int r = -1e9;

        if (root->left)
            l = find(root->left);
        if (root->right)
            r = find(root->right);

        int temp = max(l + root->val, r + root->val);
        temp = max(temp, root->val);

        ans = max(ans, max(temp, l + r + root->val));

        return temp;
    }

    int maxPathSum(TreeNode *root)
    {
        ans = INT_MIN;
        find(root);
        return ans;
    }
};