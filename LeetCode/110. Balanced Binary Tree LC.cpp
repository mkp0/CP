class Solution
{
public:
    int func(TreeNode *&root, bool &is)
    {
        if (!root || !is)
            return 0;

        int lh = func(root->left, is);
        int rh = func(root->right, is);

        if (abs(lh - rh) > 1)
        {
            is = false;
            return 0;
        }

        return max(lh, rh) + 1;
    }

    bool isBalanced(TreeNode *root)
    {
        bool is = true;
        func(root, is);
        return is;
    }
};