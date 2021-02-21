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
    
    int findans(TreeNode*& root, int& ans)
    {
        if(!root)
            return 0;
        
        int left = findans(root->left,ans);
        int righ = findans(root->right,ans);
        
        ans += abs(left-righ);
        
        return left+righ+root->val;
    }
    
    int findTilt(TreeNode* root) {
        if(!root)
            return 0;
        
        int ans = 0;
        
        findans(root,ans);
        
        return ans;
    }
};