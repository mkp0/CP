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
    int findRightMin(TreeNode *root)
    {
        if (root->left)
            return findRightMin(root->left);

        return root->val;
    }

    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (!root)
            return nullptr;

        if (root->val < key)
            root->right = deleteNode(root->right, key);
        else if (root->val > key)
            root->left = deleteNode(root->left, key);
        else
        {
            if (!root->left)
                return root->right;
            else if (!root->right)
                return root->left;
            else
            {
                int val = findRightMin(root->right);
                root->val = val;
                root->right = deleteNode(root->right, val);
            }
        }

        return root;
    }
};