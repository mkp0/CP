class Solution
{
public:
    //Function to return maximum path sum from any node in a tree.
    int ans;

    bool isleaf(Node *root)
    {
        if (!root->left && !root->right)
            return true;

        return false;
    }

    int preorder(Node *root)
    {
        if (isleaf(root))
        {
            ans = max(ans, root->data);
            return root->data;
        }

        int l = -1e9;
        int r = -1e9;

        if (root->left)
            l = preorder(root->left);
        if (root->right)
            r = preorder(root->right);

        int temp = max(l + root->data, r + root->data);
        temp = max(temp, root->data + l + r);
        temp = max(temp, root->data);
        ans = max(ans, temp);

        return max(l + root->data, max(root->data, r + root->data));
    }

    int findMaxSum(Node *root)
    {
        if (!root)
            return 0;

        ans = INT_MIN;

        preorder(root);

        return ans;
    }
};