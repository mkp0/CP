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
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*> q;
        q.push(root);
        int ans = INT_MIN;
        int lev = 1;
        int co = 0;
        while(!q.empty())
        {
            queue<TreeNode*> q1;
            int su = 0;
            co++;
            while(!q.empty())
            {
                auto u = q.front();
                if(u->left)
                {
                    q1.push(u->left);
                }
                if(u->right)
                {
                    q1.push(u->right);
                }
                su += u->val;
                q.pop();
            }
            if(su>ans)
            {
                ans = su;
                lev = co;
            }
            q = q1;
        }
        return lev;
    }
};