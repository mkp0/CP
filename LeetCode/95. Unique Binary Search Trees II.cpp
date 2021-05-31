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
    
    vector<TreeNode*> calculate(int st,int ed)
    {
        vector<TreeNode*> ans;
        
        if(st>ed)
        {
            ans.push_back(NULL);
            return ans;
        }
        
        for(int i = st;i<= ed;i++)
        {
            auto le = calculate(st,i-1);
            auto ri = calculate(i+1,ed);
            
            
            for(auto l : le)
            {
                
                for(auto r : ri)
                {
                    TreeNode* root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    
                    ans.push_back(root);
                }
            }
        }
        
        return ans;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> ans;
        if(!n)return ans;
        
        ans = calculate(1,n);
        return ans;
    }
};