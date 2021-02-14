class Solution
{
public:
    TreeNode *inorder(TreeNode *root, TreeNode *res)
    {
        if (root == NULL)
            return res;
        TreeNode *l = inorder(root->left, res);

        l->right = new TreeNode(root->val);

        TreeNode *r = inorder(root->right, l->right);

        return r;
    }

    TreeNode *increasingBST(TreeNode *root)
    {
        if (root == NULL)
            return root;
        TreeNode *ans = new TreeNode(0);

        inorder(root, ans);

        ans = ans->right;

        return ans;
    }
};