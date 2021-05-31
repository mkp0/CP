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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;

        if (!root)
            return ans;

        queue<TreeNode *> q;
        q.push(root);
        int n = 0;
        while (!q.empty())
        {
            queue<TreeNode *> q1;

            vector<int> temp;
            while (!q.empty())
            {
                auto x = q.front();
                temp.push_back(x->val);
                q.pop();
                if (x->left)
                {
                    q1.push(x->left);
                }
                if (x->right)
                {
                    q1.push(x->right);
                }
            }
            q = q1;
            if (n % 2)
            {
                reverse(temp.begin(), temp.end());
            }
            ans.push_back(temp);
            n++;
        }

        return ans;
    }
};