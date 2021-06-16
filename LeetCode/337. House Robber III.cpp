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
    map<TreeNode *, int> m;
    int rob(TreeNode *root)
    {
        if (!root)
            return 0;
        if (m.count(root))
            return m[root];
        int ans = root->val;
        if (root->left)
            ans += rob(root->left->left) + rob(root->left->right);
        if (root->right)
            ans += rob(root->right->right) + rob(root->right->left);

        ans = max(ans, rob(root->left) + rob(root->right));
        m[root] = ans;

        return ans;
    }
};