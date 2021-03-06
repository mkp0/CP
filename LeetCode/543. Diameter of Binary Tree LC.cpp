class Solution {
public:
    
    int dia(TreeNode* root,int &d)
    {
        if(!root)return 0;
        
        int lheight = dia(root->left,d);
        int rheight = dia(root->right,d);
        
        d = max(d,lheight + rheight);        
                
        return max(lheight , rheight) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int d = 0;
        dia(root,d);
        return d;
    }
};