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
    int n, pos = -1;
    TreeNode *build(vector<int> &preorder, vector<int> &inorder, int inst, int ined)
    {
        if ((inst > ined) || (pos == n))
        {
            return nullptr;
        }
        pos++;

        if (pos == (n - 1))
            return new TreeNode(preorder[pos]);

        auto root = new TreeNode(preorder[pos]);

        // finding   preorder[st] in   inorder[i]
        int i = 0;
        for (i = inst; i <= ined; i++)
        {
            if (inorder[i] == preorder[pos])
            {
                break;
            }
        }

        root->left = build(preorder, inorder, inst, i - 1);
        root->right = build(preorder, inorder, i + 1, ined);

        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        n = preorder.size();

        return build(preorder, inorder, 0, n - 1);
    }
};