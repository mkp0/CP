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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*> q;
        q.push(root);
        int ans = 0;
        
        while(!q.empty())
        {
            auto x = q.front();
            queue<TreeNode*> q1;
            ans = x->val;
            while(!q.empty())
            {
                auto y = q.front();
                q.pop();
                if(y->left)
                    q1.push(y->left);
                if(y->right)
                    q1.push(y->right);
            }
            q = q1;
        }
        return ans;
    }
};