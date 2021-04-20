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
    
    void getmax(TreeNode* root,int mx, int mi, int &ans)
    {
        if(!root)return;
        
        mx = max(mx,root->val);
        mi = min(mi,root->val);
        
        ans = max(ans,mx-mi);
        
        getmax(root->right,mx,mi,ans);
        getmax(root->left,mx,mi,ans);
    }
    
    int maxAncestorDiff(TreeNode* root) {
        if(!root) return 0;
        
        int mx = INT_MIN,mi = INT_MAX;
        int ans = 0;
        getmax(root,mx,mi,ans);
        
        return ans;
    }
};