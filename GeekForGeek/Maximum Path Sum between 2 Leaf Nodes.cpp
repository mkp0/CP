class Solution
{
public:
    int ans;
    int dfs(Node *root)
    {
        if (!root)
            return 0;

        int l = dfs(root->left);
        int r = dfs(root->right);
        if (root->left && root->right)
            ans = max(ans, l + r + root->data);

        if (!root->left)
            return r + root->data;
        if (!root->right)
            return l + root->data;

        return max(l + root->data, r + root->data);
    }

    int maxPathSum(Node *root)
    {
        if (!root)
            return 0;
        ans = INT_MIN;
        int temp = dfs(root);

        if (ans == INT_MIN)
            return temp;
        return ans;
    }
};