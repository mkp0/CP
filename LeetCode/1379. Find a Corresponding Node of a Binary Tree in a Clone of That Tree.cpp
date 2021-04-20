/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==target)
        {
            return cloned;
        }
        TreeNode* x = nullptr;
        TreeNode* y = nullptr;
        if(original->left)
          x = (getTargetCopy(original->left,cloned->left,target));
        if(original->right) 
         y = (getTargetCopy(original->right,cloned->right,target));
        
        if(x)
            return x;
        if(y)
            return y;
        
        return nullptr;
    }
};