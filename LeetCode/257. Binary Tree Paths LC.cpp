class Solution {
public:
    
    void find(TreeNode* root,vector<string>& ans, string s)
    {
        if(!root)return;
        s+="->";
        s+=to_string(root->val);
        if(!root->left && !root->right)
        {
            ans.push_back(s);
            return;
        }
        if(root->left)
        {
            find(root->left,ans,s);
        }
        if(root->right)
        {
            find(root->right,ans,s);
        }
    }
        
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        
        if(!root) return ans;
        if(!root->left && !root->right)
        {
            ans.push_back(to_string(root->val));
            return ans;
        }
        
        find(root->left,ans,"" + to_string(root->val));
        find(root->right,ans,"" + to_string(root->val));
        
        return ans;
    }
};