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
    
    int preorder(TreeNode* root,int low , int high)
    {
        if(!root)
        {
            return 0;
        }
        int ans = 0;
        if(root->val > high)
        {
            ans = preorder(root->left,low,high);
        }else if(root->val<=high && root->val>=low)
        {
            ans = root->val + preorder(root->left,low , high) + preorder(root->right, low , high);
        }else
        {
            ans = preorder(root->right,low, high);
        }
        
        return ans;
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int ans = preorder(root, low , high);
        
        return ans;
    }
};