class Solution
{
public:
    void inorder(TreeNode *root, TreeNode *&prev, int &md)
    {
        if (root->left)
            inorder(root->left, prev, md);
        if (prev)
            md = min(md, abs(root->val - prev->val));
        prev = root;
        if (root->right)
            inorder(root->right, prev, md);
    }

    int minDiffInBST(TreeNode *root)
    {
        int mindiff = INT_MAX;
        TreeNode *prev = NULL;
        inorder(root, prev, mindiff);
        return mindiff;
    }
};