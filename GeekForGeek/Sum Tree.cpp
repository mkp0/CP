// Should return true if tree is Sum Tree, else false
class Solution
{
public:
    int isSum(Node *root, bool &ans)
    {
        if (!root)
            return 0;
        if (!root->left && !root->right)
        {
            return root->data;
        }

        int ldata = isSum(root->left, ans);
        int rdata = isSum(root->right, ans);

        ans = ans & ((ldata + rdata) == root->data);

        return ldata + rdata + root->data;
    }

    bool isSumTree(Node *root)
    {
        if (!root)
            return true;

        bool is = true;

        isSum(root, is);

        return is;
    }
};