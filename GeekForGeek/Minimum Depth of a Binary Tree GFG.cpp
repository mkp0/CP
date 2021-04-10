
class Solution
{
public:
    /*You are required to complete this method*/
    int minDepth(Node *root)
    {
        if (!root)
            return 0;

        int l = INT_MAX, r = INT_MAX;

        if (!root->left && !root->right)
        {
            return 1;
        }

        if (root->left)
        {
            l = minDepth(root->left);
        }
        if (root->right)
        {
            r = minDepth(root->right);
        }

        return min(l, r) + 1;
    }
};