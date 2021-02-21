class Solution
{
public:
    void findans(TreeNode *&root, int &mindiff, TreeNode *&prev)
    {
        if (root->left)
            findans(root->left, mindiff, prev);
        if (prev)
            mindiff = min(mindiff, abs(root->val - prev->val));
        prev = root;
        if (root->right)
            findans(root->right, mindiff, prev);
    }

    int getMinimumDifference(TreeNode *root)
    {
        int mindiff = INT_MAX;
        TreeNode *prev = NULL;
        findans(root, mindiff, prev);
        return mindiff;
    }
};