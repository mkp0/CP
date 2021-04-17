void getAns(Node* root, int su,int& ans)
{
    if(!root->left && !root->right)
    {
        ans = max(ans,su);
        return;
    }
    
    if(root->left)
    {
        getAns(root->left,su+root->left->data,ans);
    }
    
    if(root->right)
    {
        getAns(root->right,su+root->right->data,ans);
    }
}

int maxPathSum(Node* root)
{
    if(!root)return 0;
    int ans = 0;
    getAns(root,root->data,ans);
    return ans;
}