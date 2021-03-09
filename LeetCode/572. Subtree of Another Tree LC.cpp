class Solution
{
public:
    bool isSubtree(TreeNode *s, TreeNode *t)
    {
        if (!s && !t)
            return true;
        if (!s || !t)
            return false;

        return issame(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
    }

    bool issame(TreeNode *&a, TreeNode *&b)
    {
        if (!a && !b)
            return true;
        if (!a || !b || a->val != b->val)
            return false;
        return issame(a->left, b->left) && issame(a->right, b->right);
    }
};