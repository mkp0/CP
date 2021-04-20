class Solution {
public:
    
    int height(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        
        return max(lh,rh)+1;
    }
    
    void preorder(TreeNode* root,int& ans , int heig,int h)
    {
        if(!root)return;
        if(h==heig)
            ans += root->val;
        preorder(root->left, ans , heig,h+1);
        preorder(root->right, ans , heig,h+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int heig = height(root);
        int ans = 0;
        preorder(root,ans,heig,1);
        
        return ans;
    }
};