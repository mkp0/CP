class Solution {
public:
    
    int post(TreeNode* root, int& ans)
    {
        if(!root)return 0;
        int left = post(root->left,ans);
        int right = post(root->right,ans);
        ans += abs(left) + abs(right);
        
        return left + right + root->val -1;
    }
    
    int distributeCoins(TreeNode* root) {
        int ans = 0;
        post(root,ans);
        return ans;
    }
};