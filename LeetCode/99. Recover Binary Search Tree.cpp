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
    TreeNode *prev = new TreeNode(INT_MIN);
    TreeNode *first = NULL;
    TreeNode *second = NULL;
    // it inorder becomes intermediate on first a[i-1]>a[i] and it beomeces second element on second a[j-1]>a[j] if only one a[i-1]>a[i] possible then intermediate is the second mistake

    void inorder(TreeNode *root)
    {
        if (root->left)
            inorder(root->left);

        if (!first && root->val < prev->val)
            first = prev;
        if (first && root->val < prev->val)
            second = root;

        prev = root;
        if (root->right)
            inorder(root->right);
    }

    void recoverTree(TreeNode *root)
    {
        inorder(root);

        int temp = first->val;
        first->val = second->val;
        second->val = temp;
    }
};