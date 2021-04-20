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
    int DFS(TreeNode* root)
    {
        if(!root)return 0;
        int su = 0;
        
        if(root->val%2==0)
        {
            if(root->left && root->left->left)
                su += root->left->left->val;
            if(root->left && root->left->right)
                su += root->left->right->val;
            if(root->right && root->right->left)
                su += root->right->left->val;
            if(root->right && root->right->right)
                su += root->right->right->val;
        }
        
        return su + DFS(root->left) + DFS(root->right);
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        return DFS(root);
    }
};