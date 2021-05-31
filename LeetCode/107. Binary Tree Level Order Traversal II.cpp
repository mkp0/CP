/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int height(TreeNode *root)
    {
        if (!root)
            return 0;
        int l = height(root->left);
        int r = height(root->right);

        return max(l, r) + 1;
    }

    void preorder(TreeNode *root, vector<vector<int>> &ans, int lev)
    {
        if (!root)
            return;

        ans[lev].push_back(root->val);

        preorder(root->left, ans, lev + 1);
        preorder(root->right, ans, lev + 1);
    }

    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        int hei = height(root);

        cout << hei << " ";

        vector<vector<int>> ans(hei);

        preorder(root, ans, 0);

        reverse(ans.begin(), ans.end());

        return ans;
    }
};