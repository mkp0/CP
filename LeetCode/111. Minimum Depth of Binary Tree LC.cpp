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
    int mind(TreeNode *&root)
    {
        if (!root)
            return INT_MAX;

        if (!root->left && !root->right)
            return 1;

        return min(mind(root->left), mind(root->right)) + 1;
    }

    int minDepth(TreeNode *&root)
    {

        if (!root)
            return 0;

        if (!root->left && !root->right)
            return 1;

        return min(mind(root->left), mind(root->right)) + 1;
    }
};