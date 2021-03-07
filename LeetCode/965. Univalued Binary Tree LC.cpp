class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {
        if (!root)
            return true;

        queue<TreeNode *> q;

        q.push(root);
        int val = root->val;

        //bfs
        while (!q.empty())
        {
            auto x = q.front();
            if (x->val != val)
                return false;

            if (x->left)
            {
                q.push(x->left);
            }
            if (x->right)
            {
                q.push(x->right);
            }
            q.pop();
        }
        return true;
    }
};