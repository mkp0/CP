class Solution
{
public:
    void inorder(TreeNode *t, string &ans)
    {
        if (!t)
            return;
        ans += to_string(t->val);
        if (!t->left && !t->right)
            return;

        ans += "(";
        inorder(t->left, ans);
        ans += ")";
        if (t->right)
        {
            ans += "(";
            inorder(t->right, ans);
            ans += ")";
        }
    }

    string tree2str(TreeNode *t)
    {
        string ans;
        inorder(t, ans);
        return ans;
    }
};