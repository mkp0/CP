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
    bool isCousins(TreeNode *root, int x, int y)
    {

        queue<TreeNode *> q;
        q.push(root);

        TreeNode *parx = nullptr;
        TreeNode *pary = nullptr;

        while (!q.empty())
        {
            int n = q.size();

            while (n--)
            {
                auto u = q.front();
                q.pop();
                if (u->left)
                {
                    q.push(u->left);
                    if (u->left->val == x)
                    {
                        parx = u;
                    }
                    if (u->left->val == y)
                    {
                        pary = u;
                    }
                }
                if (u->right)
                {
                    q.push(u->right);
                    if (u->right->val == x)
                    {
                        parx = u;
                    }
                    if (u->right->val == y)
                    {
                        pary = u;
                    }
                }
            }
            if (parx && pary && (parx != pary))
                return true;
            if ((parx && !pary) || (!parx && pary))
                return false;
        }

        return false;
    }
};