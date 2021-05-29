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
    TreeNode *build(vector<int> &inorder, vector<int> &postorder, int inst, int ined, int &pos)
    {
        if ((pos < 0) || (inst > ined))
        {
            return nullptr;
        }

        auto root = new TreeNode(postorder[pos]);

        int i = 0;

        for (i = inst; i <= ined; i++)
        {
            if (inorder[i] == postorder[pos])
            {
                break;
            }
        }
        pos--;
        root->right = build(inorder, postorder, i + 1, ined, pos);
        root->left = build(inorder, postorder, inst, i - 1, pos);

        return root;
    }

    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int n = postorder.size();
        int pos = n - 1;
        return build(inorder, postorder, 0, n - 1, pos);
    }
};