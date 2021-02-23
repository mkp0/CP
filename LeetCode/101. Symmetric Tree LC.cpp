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
    bool ishelp(TreeNode *l, TreeNode *r)
    {
        if (!l && !r)
            return true;
        if ((!l && r) || (!r && l))
            return false;

        if (l->val != r->val)
            return false;

        return ishelp(l->right, r->left) && ishelp(l->left, r->right);
    }

    bool isSymmetric(TreeNode *root)
    {
        if (!root || (!root->left && !root->right))
            return true;

        return ishelp(root->left, root->right);
    }
};