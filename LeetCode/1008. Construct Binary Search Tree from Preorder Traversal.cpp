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
    TreeNode *DFS(vector<int> &preorder, int mi, int ma, int &po, int si)
    {
        if (po == si)
            return nullptr;
        if (preorder[po] < mi || preorder[po] > ma)
            return nullptr;
        TreeNode *ans = new TreeNode(preorder[po]);
        po += 1;
        ans->left = DFS(preorder, mi, ans->val, po, si);
        ans->right = DFS(preorder, ans->val, ma, po, si);
        return ans;
    }

    TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        int po = 0;
        return DFS(preorder, INT_MIN, INT_MAX, po, preorder.size());
    }
};