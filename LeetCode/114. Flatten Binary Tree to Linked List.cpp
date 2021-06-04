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
    void flatten(TreeNode *root)
    {
        if (!root)
            return;

        auto temp = root->right;
        root->right = root->left;
        root->left = nullptr;

        auto tempRoot = root;

        while (tempRoot->right)
        {
            tempRoot = tempRoot->right;
        }

        tempRoot->right = temp;
        flatten(root->right);
    }
};