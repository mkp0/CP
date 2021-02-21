class Solution
{
public:
    int dfs(stack<TreeNode *> &s)
    {
        while (1)
        {
            TreeNode *tp = s.top();
            s.pop();

            if (tp->left)
            {
                s.push(tp->left);
            }
            if (tp->right)
            {
                s.push(tp->right);
            }
            if (tp->left == NULL && tp->right == NULL)
            {
                return tp->val;
            }
        }
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        stack<TreeNode *> s1;
        stack<TreeNode *> s2;

        s1.push(root1);
        s2.push(root2);

        while (!s1.empty() && !s2.empty())
        {
            if (dfs(s1) != dfs(s2))
                return false;
        }

        return s1.empty() == s2.empty();
    }
};