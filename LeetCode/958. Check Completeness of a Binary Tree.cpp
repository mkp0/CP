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
    bool isCompleteTree(TreeNode *root)
    {
        if (!root)
            return true;

        queue<TreeNode *> q;
        q.push(root);

        int len = 1;

        bool is = true;

        while (!q.empty())
        {
            int x = q.size();
            int pos = 0;
            int ele = 0;

            if (x != len)
                is = false;

            while (x--)
            {
                TreeNode *u = q.front();
                q.pop();
                pos++;
                if (u->left)
                {
                    ele++;
                    if (pos != ele)
                        return false;
                    q.push(u->left);
                }
                pos++;
                if (u->right)
                {
                    ele++;
                    if (pos != ele)
                        return false;
                    q.push(u->right);
                }
            }

            if (!is && q.size())
                return false;

            len *= 2;
        }

        return true;
    }
};