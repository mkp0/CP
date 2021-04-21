
class Solution
{
public:
    /*You are required to complete this method*/

    bool DFS(Node *root, int d, int lev)
    {
        if (!root)
            return true;

        if (!root->left && !root->right)
            return d == lev;

        return DFS(root->left, d, lev + 1) && DFS(root->right, d, lev + 1);
    }

    int depth(Node *root)
    {
        if (!root)
            return 0;
        int lh = depth(root->right);
        int rh = depth(root->left);

        return max(lh, rh) + 1;
    }

    bool check(Node *root)
    {
        int d = depth(root);
        return DFS(root, d, 1);
    }
};