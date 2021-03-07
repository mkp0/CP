class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (!root)
            return root;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            auto x = q.front();
            q.pop();

            swap(x->left, x->right);
            if (x->left)
                q.push(x->left);
            if (x->right)
                q.push(x->right);
        }
        return root;
    }
};