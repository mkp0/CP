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
    void inorder(TreeNode *root, vector<int> &ans, int lev)
    {
        if (!root)
            return;

        if (ans.size() < lev)
        {
            ans.push_back(root->val);
        }

        inorder(root->right, ans, lev + 1);
        inorder(root->left, ans, lev + 1);
    }

    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;

        inorder(root, ans, 1);

        return ans;
    }
};