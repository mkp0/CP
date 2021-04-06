class Solution
{
public:
    //Function to return the diameter of a Binary Tree.
    int ans = 0;
    int hei(Node *root)
    {
        if (!root)
            return 0;
        int rh = hei(root->right);

        int lh = hei(root->left);

        ans = max(ans, rh + lh + 1);

        return max(lh, rh) + 1;
    }
    int diameter(Node *root)
    {
        if (!root)
            return 0;

        hei(root);
        return ans;
    }
};