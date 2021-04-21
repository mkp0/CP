
// Return the minimum absolute difference between any tree node and the integer K
class Solution
{
    public:
    
    void DFS(Node* root , int& k,int& ans)
    {
        if(!root)return;
        int cal = abs(root->data-k);
        ans = min(ans,cal);
        DFS(root->left,k,ans);
        DFS(root->right,k,ans);
    }
    
    int minDiff(Node *root, int k)
    {
        int ans = INT_MAX;
        DFS(root,k,ans);
        return ans;
    }
};
