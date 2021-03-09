class Solution
{
public:
    bool isleave(TreeNode *node)
    {
        if (!node->left && !node->right)
        {
            return true;
        }
        return false;
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        if (!root)
            return 0;

        if (root->left && isleave(root->left))
        {
            return root->left->val + sumOfLeftLeaves(root->right);
        }
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};