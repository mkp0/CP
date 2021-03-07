class Solution
{
public:
    void preorder(TreeNode *&root, int &ans, int till)
    {
        if (!root)
            return;
        till = till << 1;
        till = till | root->val;
        if (!root->left && !root->right)
            ans += till;
        preorder(root->left, ans, till);
        preorder(root->right, ans, till);
    }

    int sumRootToLeaf(TreeNode *root)
    {
        int ans = 0;
        preorder(root, ans, 0);

        return ans;
    }
};