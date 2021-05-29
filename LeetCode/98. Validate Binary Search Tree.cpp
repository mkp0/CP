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
    bool inorder(TreeNode *root, TreeNode *mini, TreeNode *maxi)
    {
        if (!root)
            return true;

        if ((mini && root->val <= mini->val) || (maxi && root->val >= maxi->val))
        {
            return false;
        }

        return inorder(root->left, mini, root) && inorder(root->right, root, maxi);
    }

    bool isValidBST(TreeNode *root)
    {
        if (!root)
            return true;

        return inorder(root, nullptr, nullptr);
    }
};