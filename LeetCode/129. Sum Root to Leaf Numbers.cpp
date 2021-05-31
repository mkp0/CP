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
    void preorder(TreeNode *root, int &ans, int temp)
    {
        if (!root)
            return;

        temp *= 10;
        temp += root->val;

        if (!root->left && !root->right)
            ans += temp;

        preorder(root->left, ans, temp);
        preorder(root->right, ans, temp);
    }

    int sumNumbers(TreeNode *root)
    {
        int ans = 0;
        int temp = 0;

        preorder(root, ans, temp);

        return ans;
    }
};